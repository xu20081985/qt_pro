#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <fcntl.h>
#include <stdio.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->slider,SIGNAL(valueChanged(int)),this,SLOT(sliderchanged(int)));

    fd = ::open("/sys/class/backlight/pwm-backlight.0/brightness",O_RDWR|O_NONBLOCK);
}

MainWindow::~MainWindow()
{
    delete ui;
    ::close(fd);
}

void MainWindow::sliderchanged(int v)
{
    char buf[20];
    sprintf(buf,"%d",v);
    ::write(fd,buf,sizeof(buf));
}

void MainWindow::moveEvent(QMoveEvent *)
{
    this->move(QPoint(0,0));
}

void MainWindow::resizeEvent(QResizeEvent *)
{
    this->showMaximized();
}
void MainWindow::closeEvent(QCloseEvent *)
{
    destroy();
    exit(0);
}
