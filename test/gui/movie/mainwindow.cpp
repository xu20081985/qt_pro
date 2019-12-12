#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDesktopWidget desktop;
    top = desktop.height()*19/100;
    left = desktop.width()*1/10;
    imageWidth = desktop.width()*4/5;
    imageHeight = desktop.height()*4/5;
    connect(ui->startButton,SIGNAL(clicked()),this,SLOT(startEvent()));
    connect(ui->stopButton,SIGNAL(clicked()),this,SLOT(stopEvent()));
    running = false;
    timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(timerEvent()));
}

MainWindow::~MainWindow()
{
    if(running){
        running = false;
        timer->stop();
        kill(pid,SIGINT);
    }
    delete ui;
}

void MainWindow::startEvent()
{
    QString cmd("video-sink=\"mfw_isink axis-top=");
    cmd.append(QString::number(top,10));
    cmd.append(QString(" axis-left="));
    cmd.append(QString::number(left,10));
    cmd.append(QString(" disp-width="));
    cmd.append(QString::number(imageWidth,10));
    cmd.append(QString(" disp-height="));
    cmd.append(QString::number(imageHeight,10));
    cmd.append(QString("\""));
    char *str = cmd.toAscii().data();


    if(running){
        qWarning("playing");
        return ;
    }
    running = true;
    pid = fork();
    if(pid < 0){
        qWarning("create error");
    }
    if(pid == 0){
        setenv("VSALPHA","1",1);
        execl("/usr/bin/gst-launch","gst-launch","playbin2","uri=file:///forlinx/media/test.mp4",str,(char *)0);
        //       execl("/usr/bin/gst-launch","gst-launch","filesrc","location=/forlinx/media/test.mp4","typefind=true","!","aiurdemux", "!", "vpudec" ,"!", "mfw_isink","axis-top=100","axis-left=100",
        //           "disp-width=640","disp-height=480",(char*)0);
    }

    if(pid > 0){
        timer->start(500);
    }
}

void MainWindow::stopEvent()
{
    if(running){
        timer->stop();
        running = false;
        kill(pid,SIGINT);

    }
}

void MainWindow::timerEvent()
{
    if(running){
        if(waitpid(pid,NULL,WNOHANG) == pid){
            running = false;
            qWarning("play finish");
        }
    }
}

void MainWindow::closeEvent(QCloseEvent *)
{
    if(running){
            running = false;
            timer->stop();
            kill(pid,SIGINT);
        }
    destroy();
    exit(0);
}
