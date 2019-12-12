#include "g3.h"
#include "ui_g3.h"
#include <qmessagebox.h>

G3::G3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::G3)
{
    ui->setupUi(this);
   ::system("ifconfig eth0 down");
   ::system("ifconfig lo down");
    m_bConnect=false;
    m_cmdPrepare =0;
    m_cmdDialup =0;
    m_cmdPrepare = new QProcess;
    m_cmdDialup = new QProcess;

    BG=new QButtonGroup(this);
    BG->addButton(ui->rb_wcdma);
    BG->addButton(ui->rb_cdma2000);
    BG->addButton(ui->rb_tdscdma);
    BG->addButton(ui->rb_wcdma_210);//mf210
    BG->setId(ui->rb_wcdma,0);
    BG->setId(ui->rb_cdma2000,1);
    BG->setId(ui->rb_tdscdma,2);
    BG->setId(ui->rb_wcdma_210,3);//mf210
    //ui->rb_wcdma->setChecked(true);
    ui->rb_wcdma_210->setChecked(true);//mf210
    connect(m_cmdPrepare, SIGNAL(readyRead()), this, SLOT(readOutput()));
    connect(m_cmdDialup, SIGNAL(readyRead()), this, SLOT(readOutput()));

}

G3::~G3()
{
    ::system("ifconfig eth0 up");
    ::system("ifconfig lo up");
    m_cmdPrepare->terminate();
    QTimer::singleShot( 3000, m_cmdPrepare, SLOT( kill() ) );

    m_cmdDialup->terminate();
    QTimer::singleShot( 3000, m_cmdDialup, SLOT(kill()));

   if(m_cmdPrepare!=NULL)
     delete m_cmdPrepare;
   m_cmdPrepare=0;
   if(m_cmdDialup!=NULL)
     delete m_cmdDialup;
   m_cmdDialup=0;

    delete ui;
}

void G3::on_pbt_connect_clicked()
{
    if(m_bConnect)
    {
        m_cmdDialup->terminate();

        QTimer::singleShot(3000, m_cmdDialup, SLOT(kill()));
        m_bConnect=false;
        ui->pbt_connect->setText("connect");
        ui->textEdit->setText(" ");
        return;
    }

    int id=BG->checkedId();
    QString str;
    if(ui->pbt_connect->text()=="connect")
    {
        switch(id)
        {
            case 0:
            str="Start connect WCDMA net, please wait......";
            m_nType=0;
            m_nChildType=0;
               break;
            case 1:
            str="Start connect CDMA2000, please wait......";
            m_nType=1;
            m_nChildType=0;
               break;
            case 2:
            str="Start connect TDSCDMA net, please wait......";
            m_nType=2;
            m_nChildType=0;
               break;
            case 4:
            str="Start connect WCDMA-mf210 net, please wait......";
            m_nType=1;
            m_nChildType=1;
                break;
            default:
               break;
        }

        ui->textEdit->setText(str);
        QFileInfo fiAD3812(ADFILE);
        if(fiAD3812.exists()&&m_nType==0)
         {
            m_nType=0;
            m_nChildType=1;
         }

        QFileInfo fiET127(ET127);
        if(fiET127.exists()&&m_nType==2)
         {
            m_nType=2;
            m_nChildType=1;
         }
        QString dialcmd=USB3GPATH;
        dialcmd+="bin/pppd";

        QString dialParam1="call";
        QString   dialParam2;
#if 0
        if(m_nType==0&&m_nChildType==0)
            dialParam2="wcdma";
        else if(m_nType==0&&m_nChildType==1)
            dialParam2="wcdma-ad3812";
        else  if(m_nType==1&&m_nChildType==0)
            dialParam2="cdma2000";
        else if(m_nType==2&&m_nChildType==0)
            dialParam2="tdscdma";
        else if(m_nType==2&&m_nChildType==1)
            dialParam2="tdscdma-et127";
        else if(m_nType==1&&m_nChildType==1)
#endif
            dialParam2="wcdma-mf210";

        QStringList para_;
        para_<<dialParam1<<dialParam2;

        ui->textEdit->setText(dialParam1+" "+dialParam2);

        m_cmdDialup->start(dialcmd,para_);
        if(!m_cmdDialup->waitForStarted())
        {
           ui->textEdit->setText("open faild");
        }
        //ui->pbt_connect->setText("Disconnect");

    }
}


void G3::readOutput()
{
    //QMessageBox::information( this, "WCDMA-AD3812","readOutput",0,0 );
    QString  output;
    QString  m_put;
    QProcess* obj = (QProcess*)sender();
    if(obj==m_cmdPrepare)
    {
        while (m_cmdPrepare->canReadLine())
        {
            QString f =  m_cmdPrepare->readAll();
            m_put=f;
        }
    }
   else
   if(obj==m_cmdDialup)
   {
        while (m_cmdDialup->canReadLine())
        {
                QString f =  m_cmdDialup->readAll();
                m_put+=f;
                int nIndex=-1;
                QString findStr="DNS";
                nIndex=f.indexOf(findStr,false);

                 if(nIndex!=-1)
                 {
                     QString tmpAddress= f.right(f.length()-nIndex);
                     int tmpAdd=tmpAddress.indexOf("address",false);

                     if(tmpAdd!=-1)
                     {
                         QString address_DNS =tmpAddress.right(tmpAddress.length()-tmpAdd); //address IP       
                         //QMessageBox::information(this,"Address_DNS", address_DNS);
                         QString strDNS=address_DNS.right(address_DNS.length()-sizeof("address"));
                         // QMessageBox::information(this,"DNS", strDNS);

                         if(!strDNS.isEmpty())
                          {
                              QString dnsFile=DNSFILE;
                              QFile file(dnsFile);

                              if (!file.open(QIODevice::ReadOnly))
                              {
                                  // QMessageBox::information(this,"DNS",dnsFile+"open fail !" );
                                  qDebug("open fail");
                                  ui->textEdit->setText("open fail");

                               }
                               QTextStream out(&file);
                               out <<"nameserver"<< "  "<<strDNS << endl;
                               file.close();

                               m_bConnect=true;
                               ui->pbt_connect->setText("Disconnect");
                         }
                    }
                 }
            }
     }
     ui->textEdit->append(m_put);
}

void G3::closeEvent(QCloseEvent *)
{
    destroy();
    exit(0);
}


