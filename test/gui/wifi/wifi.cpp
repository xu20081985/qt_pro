#include "wifi.h"
#include "ui_wifi.h"

#include <qmessagebox.h>

#include <QtNetwork>
#include <QNetworkAddressEntry>


Wifi::Wifi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Wifi)
{

    ui->setupUi(this);
    ::system("ifconfig eth0 down");
    ::system("ifconfig lo down");
    m_cmdScanning = new QProcess(this);
    connect(m_cmdScanning, SIGNAL(readyRead()), this, SLOT(readScanningOutput()));
    m_cmdConnecting=new QProcess(this);
    connect(m_cmdConnecting, SIGNAL(readyRead()), this, SLOT(readConnectOutput()));
}

Wifi::~Wifi()
{

    if(m_cmdScanning ->Running)
    {
      m_cmdScanning->terminate();
      QTimer::singleShot( 1000, m_cmdScanning, SLOT( kill() ) );

    }
     if(m_cmdScanning!=NULL)
      delete m_cmdScanning;

     if(m_cmdConnecting->Running)
      {
       m_cmdConnecting->terminate();
       QTimer::singleShot( 1000, m_cmdConnecting, SLOT( kill() ) );
      }

     ::system("ifconfig wlan0  down");
     ::system("killall  udhcpc ");

     ::system("ifconfig eth0 up");
     ::system("ifconfig lo up");
     ::system("/etc/init.d/ifconfig-eth0");
    delete ui;
}

void Wifi::on_pbt_scan_clicked()
{
     ::system("ifconfig wlan0  down");
     ::system("ifconfig wlan0  up");

     QString cmd="iwlist";
     QStringList para_;
     para_<<"scanning";
     m_cmdScanning->start(cmd,para_);
}

void Wifi::readScanningOutput()
{

     while (m_cmdScanning->canReadLine())
     {
        QString lineInfo =  m_cmdScanning->readAll();
        ui->Edit_show->append(lineInfo);
     }

}


void Wifi::on_pbt_connect_clicked()
{
    if(ui->pbt_connect->text()=="connect")
     {

        QString password=ui->Edit_pass->text();

       if(!password.isEmpty())//  password input
        {

           QString setKey;

           setKey="iwconfig wlan0  key ";
           setKey+=password;

          ::system(setKey.toAscii());



        }

       //connect wifi net

       QString strEssid=ui->Edit_name->text();

       if(!strEssid.isEmpty())
       {

          QString essid="iwconfig wlan0 essid  ";
          essid+=strEssid;
          ::system(essid.toAscii());
       }

        QString cmd="udhcpc";
        QStringList para_;
        para_<<"-b"<<"-i"<<"wlan0";

        m_cmdConnecting->start(cmd,para_);


        ui->pbt_connect->setText("disconnect");
    }
    else
    {
        ::system("ifconfig wlan0 down");
        ::system("killall  udhcpc ");

        ::system("ifconfig eth0 up");
        ::system("ifconfig lo up");
        ::system("/etc/init.d/ifconfig-eth0");
         ui->Edit_show->setText(" ");

        ui->pbt_connect->setText("connect");

    }


}

void Wifi::on_pbt_open_clicked()
{
        ::system("ifconfig wlan0 up");
        char buf[1024];
        QString info  = "";
        QList<QNetworkInterface>list=QNetworkInterface::allInterfaces();
        foreach(QNetworkInterface interface,list)
        {
            if (interface.name().compare("lo") != 0)
            {
                info += "Device:" + interface.name()+"\n";
                info += "HardwareAddress:" + interface.hardwareAddress()+"\n";
                QList<QNetworkAddressEntry>entryList=interface.addressEntries();

                foreach(QNetworkAddressEntry entry,entryList)
                {
                    info += entry.ip().toString()+"\n";
                    if (interface.name().compare("wlan0") == 0 && entry.ip().toString().size() < 5)
                    {
                    }
                    if (interface.name().compare("eth0") == 0 && entry.ip().toString().size() < 5)
                    {
                    }
                    info += entry.netmask().toString()+"\n";
                    info += entry.broadcast().toString()+"\n";
                }

                info += "\n";
            }
         }
         ui->Edit_show->setText(info);
         return;
}

void Wifi::readConnectOutput()
{

      while (m_cmdConnecting->canReadLine())
      {
           QString lineInfo =  m_cmdConnecting->readAll();

           ui->Edit_show->append(lineInfo);
           int nResult=lineInfo.indexOf("No lease");
           if(nResult != -1)
           {
               QMessageBox::information(this,"Connect error ","Please check passord or DHCP Server of route device  is working");
           }

      }

}

void Wifi::closeEvent(QCloseEvent *)
{
    destroy();
    exit(0);
}
