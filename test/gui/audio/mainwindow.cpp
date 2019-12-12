#include <sys/ioctl.h>
#include <fcntl.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QDateTime>
#include <QDate>
#include <QTime>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    char buf[32];

    ui->setupUi(this);

    playing = false;
    process = NULL;
    process2 = NULL;
    timer = NULL;

    btg = new QButtonGroup;
    btg->addButton(ui->radioMIC,0);
    btg->addButton(ui->radioLINEIN,1);

    ui->slider->setDisabled(true);
    ui->list->addItem(new QListWidgetItem("/forlinx/sound/wo.wav"));
    ui->list->setCurrentRow(0);
    ::system("amixer cset name='Headphone Volume' 127,127");
    ::system("/usr/bin/amixer sset 'MIXINR IN3R' on");
    ::system("amixer sset 'INPGAR IN3R' on");
    ::system("amixer cset name='Capture Volume' 63,63");
}

MainWindow::~MainWindow()
{
    delete ui;
    delete btg;
    delete process;
    delete process2;
}

void MainWindow::on_play_clicked()
{
    if(ui->list->currentItem() == NULL)
    {
        QMessageBox::about(this,"error","nothing selected!");
        return;
    }

    QString file = ui->list->currentItem()->text();

    QFile f(file);

    if(!f.exists())
    {
        QMessageBox::about(this,"error","the file doesn't exist!");
        return;
    }

    QString cmd = QString("/usr/bin/gplay ")+file;

    if(timer)delete timer;
    if(process)delete process;

    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(timerdone()));
    //    timer->start(1000);  //一秒钟后开始触发，然后一秒一次

    process = new QProcess();
    process->setProcessChannelMode(QProcess::MergedChannels);
    connect(process,SIGNAL(readyReadStandardOutput()),this,SLOT(output()));

    process->start(cmd.toAscii());
    //    process->write(" \n");

    if(!playing)
    {
        ui->pause->setText("pause");
        ui->slider->setDisabled(false);
    }

    playing = true;

    ui->slider->setMinimum(0);
    ui->slider->setValue(0);
    ui->slider->setDisabled(false);
}

void MainWindow::on_stop_clicked()
{
    if(process == NULL)
        return;
    process->write("s \n");
    delete process;
    delete timer;
    process = NULL;
    timer = NULL;
}

void MainWindow::on_add_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("open file"), " ",  tr("Allfile(*.*);;mp3file(*.mp3);;wmafile(*.wma);;wavefile(*.wav)"));
    ui->list->addItem(new QListWidgetItem(fileName));
    ui->list->setCurrentRow(0);
}

void MainWindow::timerdone()
{
    //   if(playing)
    //     process->write(" \n");
}

void MainWindow::output()
{
    QByteArray ba;

    while(1)
    {

        if(process->canReadLine()){

            QString msg(process->readLine());
            ba = msg.toAscii();
            qWarning("%s",ba.data());
            if(msg.left(10) == QString("ANS_LENGTH"))
            {
                QString str;
                int len = (int)(msg.right(msg.length()-11).toDouble());
                ui->slider->setMaximum(len);
                str.sprintf("%02d:%02d",len/60,len%60);
                ui->length->setText(str);
            }
            else if(msg.left(17) == QString("ANS_TIME_POSITION"))
            {
                QString str;
                int pos = (int)(msg.right(msg.length()-18).toDouble());
                ui->slider->setValue(pos);
                str.sprintf("%02d:%02d",pos/60,pos%60);
                ui->pos->setText(str);
            }
            continue;
        } else {
            QString msg(process->readLine());
            ba = msg.right(26).toAscii();

            char *str;
            QString qstr;
            str = ba.data();
            if((str[0] == '[') && (str[9]=='/')){
                int h,m,s,t_h,t_m,t_s;
                ::sscanf(str,"[%02d:%02d:%02d/%02d:%02d:%02d]",&h,&m,&s,&t_h,&t_m,&t_s);
                ui->slider->setMaximum(t_h*60*60+t_m*60+t_s);
                ui->slider->setValue(h*60*60 + m*60 + s);
                qstr.sprintf("%02d:%02d",t_m,t_s);
                ui->length->setText(qstr);
                qstr.sprintf("%02d:%02d",m,s);
                ui->pos->setText(qstr);
            }
            break;
        }

    }

}


void MainWindow::on_pause_clicked()
{
    if(process == NULL)
        return;

    if(playing)
    {
        ui->pause->setText("resume");
        ui->slider->setDisabled(true);
    }
    else
    {
        ui->pause->setText("pause");
        ui->slider->setDisabled(false);
    }

    process->write("a \n");

    playing = !playing;

}

void MainWindow::on_slider_sliderMoved(int position)
{
    if(process == NULL)
        return;

    //    QString tmp = QString("seek ")+QString::number(ui->slider->value())+QString(" 2 \n");

    //    process->write(tmp.toAscii());
}

void MainWindow::on_del_clicked()
{
    ui->list->removeItemWidget(ui->list->takeItem(ui->list->currentRow()));
}

void MainWindow::moveEvent(QMoveEvent *)
{
    this->move(QPoint(0,0));
}

void MainWindow::resizeEvent(QResizeEvent *)
{
    this->showMaximized();
}

void MainWindow::on_record_clicked()
{
    QDateTime dt;
    QDate date;
    QTime time;

    if(process2)
    {
        delete process2;
        process2 = NULL;
    }


    if(ui->record->text() == QString("record"))
    {
        ui->record->setText("stop");

        process2 = new QProcess();

        dt.setDate(date.currentDate());
        dt.setTime(time.currentTime());
        filename = dt.toString("yyyyMMddhhmmss")+QString(".mp3");
        process2->start("/usr/bin/gst-launch alsasrc num-buffers=240 blocksize=44100 ! mfw_mp3encoder ! filesink location=/tmp/"+ filename);
    }
    else
    {
        ui->record->setText("record");

        ui->list->addItem(new QListWidgetItem("/tmp/"+filename));
        ui->list->setCurrentRow(ui->list->count()-1);
    }
}

void MainWindow::closeEvent(QCloseEvent *)
{
    destroy();
    exit(0);
}
