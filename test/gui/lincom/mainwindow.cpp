#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    startInit();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type())
    {
        case QEvent::LanguageChange:
             ui->retranslateUi(this);
             break;
        default:
             break;
    }
}

//initialition
void MainWindow::startInit()
{
    setActionsEnabled(false);

    ui->delayspinBox->setEnabled(false);
    ui->sendmsgBtn->setEnabled(false);
    ui->sendMsgLineEdit->setEnabled(false);
    ui->obocheckBox->setEnabled(false);
    ui->actionAdd->setEnabled(true);

    //read ms
    timerdly = TIMER_INTERVAL;

    //initilation ms
    obotimerdly = OBO_TIMER_INTERVAL;

    //read time set
    //timer = new QTimer(this);

    myCom = new SerialPort();

    connect(myCom, SIGNAL(hasdata()), this, SLOT(readMyCom()));
    //continue set
    obotimer = new QTimer(this);
    connect(obotimer, SIGNAL(timeout()), this, SLOT(sendMsg()));

}

void MainWindow::setActionsEnabled(bool status)
{
    ui->actionSave->setEnabled(status);
    ui->actionClose->setEnabled(status);
    ui->actionLoadfile->setEnabled(status);
    ui->actionCleanPort->setEnabled(status);
    ui->actionWriteToFile->setEnabled(status);
}

void MainWindow::setComboBoxEnabled(bool status)
{
    ui->portNameComboBox->setEnabled(status);
    ui->baudRateComboBox->setEnabled(status);
    ui->dataBitsComboBox->setEnabled(status);
    ui->parityComboBox->setEnabled(status);
    ui->stopBitsComboBox->setEnabled(status);
}

//open port
void MainWindow::on_actionOpen_triggered()
{
    QString portName = "/dev/" + ui->portNameComboBox->currentText();   //get port

    if(myCom->openPort(portName,
                       (BaudRateType)ui->baudRateComboBox->currentIndex(),
                       (DataBitsType)ui->dataBitsComboBox->currentIndex(),
                       (ParityType)ui->parityComboBox->currentIndex(),
                       (StopBitsType)ui->stopBitsComboBox->currentIndex(),
                       FLOW_OFF,TIME_OUT))
    {
        QMessageBox::information(this, tr("open success"), tr("open succeed ") + portName, QMessageBox::Ok);
    }
    else
    {
        QMessageBox::critical(this, tr("open failed"), tr("open failed ") + portName + tr("\nThe serial port is already in use or does not exists!"), QMessageBox::Ok);
        return;
    }


    //constrol ui
    ui->sendmsgBtn->setEnabled(true);

    setComboBoxEnabled(false);

    ui->sendMsgLineEdit->setEnabled(true);

    ui->actionOpen->setEnabled(false);
    ui->sendMsgLineEdit->setFocus();
    ui->obocheckBox->setEnabled(true);
    ui->actionAdd->setEnabled(false);

    setActionsEnabled(true);   

}


//close port
void MainWindow::on_actionClose_triggered()
{

    if(obotimer->isActive())
    {
        obotimer->stop();

    }
    myCom->close();
    ui->sendmsgBtn->setEnabled(false);
    ui->sendmsgBtn->setText("send");

    setComboBoxEnabled(true);

    ui->actionOpen->setEnabled(true);
    ui->sendMsgLineEdit->setEnabled(false);
    ui->obocheckBox->setEnabled(false);
    ui->actionAdd->setEnabled(true);

    setActionsEnabled(false);

    ui->actionWriteToFile->setChecked(false);

}



//read data
void MainWindow::readMyCom()
{

//    qDebug("read myco,");
    QByteArray temp = myCom->read();
//    qDebug("aadasdadasd");
//    qDebug()<<temp.data()<<"aaa";


    if(!temp.isEmpty())
    {

        if(write2fileName.isEmpty())
        {
            ui->textBrowser->setTextColor(Qt::lightGray);
            ui->textBrowser->append(tr("receive: "));
            ui->textBrowser->setTextColor(Qt::black);
            if(ui->ccradioButton->isChecked())
            {
                ui->textBrowser->append(temp);
            }
            else if(ui->chradioButton->isChecked())
            {
                ui->textBrowser->append(tr("")+temp.toHex());
            }
            else
            {
                ui->textBrowser->append(tr("")+temp.toInt());
            }

        }
        else
        {
            QFile file(write2fileName);
            //faild
            if(!file.open(QFile::Append | QIODevice::Text))
            {
                QMessageBox::warning(this, tr("write file"), tr("open file %1 faild, can not write\n%2").arg(write2fileName).arg(file.errorString()), QMessageBox::Ok);
                return;
            }
            QTextStream out(&file);
            out<<temp<<endl;
            file.close();
            ui->textBrowser->append(tr("receive:write file over %1").arg(write2fileName));
        }

        ui->recvbyteslcdNumber->display(ui->recvbyteslcdNumber->value() + temp.size());

    }
}

//continue send data
void MainWindow::sendMsg()
{
    myCom->write(ui->sendMsgLineEdit->text().toAscii());
    ui->textBrowser->append(tr("send: ") + ui->sendMsgLineEdit->text());

}

//send data
void MainWindow::on_sendmsgBtn_clicked()
{
    //halt send
    if(ui->sendmsgBtn->text() == tr("halt"))
    {
        obotimer->stop();
        ui->obocheckBox->setEnabled(true);
        ui->sendmsgBtn->setText(tr("send"));
        ui->sendmsgBtn->setIcon(QIcon(":new/prefix1/src/send.png"));
        return;
    }
    //send null
    if(ui->sendMsgLineEdit->text().isEmpty())
    {
        QMessageBox::information(this, tr("hint"), tr("can not send data"), QMessageBox::Ok);
        return;
    }
    //send data
    myCom->write(ui->sendMsgLineEdit->text().toAscii());

    //ui control
    ui->textBrowser->setTextColor(Qt::lightGray);
    ui->textBrowser->append(tr("send: "));
    ui->textBrowser->setTextColor(Qt::black);
    ui->textBrowser->append(ui->sendMsgLineEdit->text());
    //not continue send
    if(!ui->obocheckBox->isChecked())
    {
        ui->sendMsgLineEdit->setFocus();
    }else
    { //continue send
        obotimer->start(obotimerdly);
        ui->obocheckBox->setEnabled(false);
        ui->sendmsgBtn->setText(tr("halt"));
        ui->sendmsgBtn->setIcon(QIcon(":new/prefix1/src/pause.png"));
    }
}
//clear text
void MainWindow::on_clearUpBtn_clicked()
{
    ui->textBrowser->clear();
}

//timer clear
void MainWindow::on_actionClearBytes_triggered()
{
    if(ui->recvbyteslcdNumber->value() == 0)
    {
        QMessageBox::information(this, tr("hint"), tr("cleared"), QMessageBox::Ok);
    }
    else
    {
        ui->recvbyteslcdNumber->display(0);

    }
}

//checkBox
void MainWindow::on_obocheckBox_clicked()
{
    if(ui->obocheckBox->isChecked())
    {
        ui->delayspinBox->setEnabled(true);
        //check data start timer

    }
    else
    {
        ui->delayspinBox->setEnabled(false);
        //close timer

    }
}

//save textBrowser
void MainWindow::on_actionSave_triggered()
{

    if(ui->textBrowser->toPlainText().isEmpty())
    {
        QMessageBox::information(this, "hint", tr("can not data send ,please input data"), QMessageBox::Ok);
        return;
    }

    QString filename = QFileDialog::getSaveFileName(this, tr("save"), tr("noname.txt"));
    QFile file(filename);
    //exit
    if(file.fileName().isEmpty())
    {
        return;
    }
    //open faild rturn
    if(!file.open(QFile::WriteOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, tr("save file "), tr("open file %1faild, can not save\n%2").arg(filename).arg(file.errorString()), QMessageBox::Ok);
        return;
    }
    //write data to file
    QTextStream out(&file);
    out<<ui->textBrowser->toPlainText();
    file.close();
    //modify title
    setWindowTitle("saved: " + QFileInfo(filename).canonicalFilePath());

}

//exit
void MainWindow::on_actionExit_triggered()
{
//    if(myCom->isOpen())
//    {
        myCom->close();
        delete myCom;
//    }
    this->close();
}

//add port
void MainWindow::on_actionAdd_triggered()
{
    bool ok = false;
    QString portname;

    portname = QInputDialog::getText(this, tr("add port"), tr("dev name"), QLineEdit::Normal, 0, &ok);
    if(ok && !portname.isEmpty())
    {
        ui->portNameComboBox->addItem(portname);

    }
}

//modify ms
void MainWindow::on_delayspinBox_valueChanged(int )
{
    obotimerdly = ui->delayspinBox->value();
}

//set read time
void MainWindow::on_actionReadPortInterval_triggered()
{
    bool ok = false;
    unsigned int interval;

    interval = QInputDialog::getInteger(this, tr("read ms"),
                                        tr("read ms between(10-5000，hm)"), timerdly, 10, 5000, 1, &ok);
    if(ok)
    {
//        timerdly = interval;
//        if(timer->isActive())
//        {
//            timer->start(timerdly);
//        }

    }
}

//load file
void MainWindow::on_actionLoadfile_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("read file"), 0, tr("save to (*.txt *.log)"));  //
    QFile file(filename);

    //exit
    if(file.fileName().isEmpty())
    {
        return;
    }

    //faild return
    if(!file.open(QFile::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, tr("open faild"),
                             tr("sorry! Lincom can not open this file . please modify permission try to use chmod ."),
                             QMessageBox::Ok);
        return;
    }

    //file size limit exceeded
    if(file.size() > MAX_FILE_SIZE)
    {
        QMessageBox::critical(this, tr("loard faild"), tr("file size is %1 byte, limit exceeded 10000 byte").arg(file.size()), QMessageBox::Ok);
        return;
    }
    //file too large
    if(file.size() > TIP_FILE_SIZE)
    {
        if(QMessageBox::question(this, tr("hint"), tr("You want to open the file is too large, it will consumu more time, to continue to open it ?"),
                                 QMessageBox::Yes | QMessageBox::No) == QMessageBox::No)
        {

            return;
        }
    }

    //read data
    QByteArray line;
    while(!file.atEnd())
    {
        line = file.readLine();
        ui->sendMsgLineEdit->setText(ui->sendMsgLineEdit->text() + tr(line));

    }
    file.close();

}

//清空串口中的I/O数据
void MainWindow::on_actionCleanPort_triggered()
{
//    myCom->flush();
}

//写入文件菜单
void MainWindow::on_actionWriteToFile_triggered()
{
    if(ui->actionWriteToFile->isChecked())
    {
        QString filename = QFileDialog::getSaveFileName(this, tr("write file "), 0, tr("save to  (*.*)"));  //
        if(filename.isEmpty())
        {
            ui->actionWriteToFile->setChecked(false);
        }
        else
        {
            write2fileName = filename;
            ui->textBrowser->setEnabled(false);
            ui->actionWriteToFile->setToolTip(tr("stop write file "));
        }
    }
    else
    {
        write2fileName.clear();
        ui->textBrowser->setEnabled(true);
        ui->actionWriteToFile->setToolTip(tr("write to file"));
    }

}

void MainWindow::closeEvent(QCloseEvent *)
{
    destroy();
    exit(0);
}
