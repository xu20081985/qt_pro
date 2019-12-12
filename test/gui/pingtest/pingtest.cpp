#include "pingtest.h"
#include "ui_pingtest.h"
#include"stdio.h"
#include <fcntl.h>
#include <qmessagebox.h>
#include <termio.h>

pingtest::pingtest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pingtest)
{
    ui->setupUi(this);
    myprocess = NULL;
}

pingtest::~pingtest()
{
    delete ui;
    if(myprocess)
        delete myprocess;
}

void pingtest::result()
{
    QString abc = myprocess->readAllStandardOutput();
    ui->result->append(abc.trimmed());
    QString efg = myprocess->readAllStandardError();
    if(efg.length()>1)ui->result->append(efg.trimmed());
}

void pingtest::closeEvent(QCloseEvent *)
{
    destroy();
    exit(0);
}

void pingtest::moveEvent(QMoveEvent *)
{
    this->move(QPoint(0,0));
}

void pingtest::resizeEvent(QResizeEvent *)
{
    this->showMaximized();
}


void pingtest::on_pingbtn_clicked()
{
    if(ui->hostname->text() == QString(""))
    {
        QMessageBox::about(this,"error","hostname cannot be empty!");
        return;
    }

    if(myprocess)
        delete myprocess;

    myprocess = new QProcess(this);
    connect(myprocess, SIGNAL(readyReadStandardOutput()),this, SLOT(result()));
    connect(myprocess, SIGNAL(readyReadStandardError()),this, SLOT(result()));
    myprocess->start(QString("ping -c 5 ")+ui->hostname->text());
    ui->result->append(QString("ping -c 5 ")+ui->hostname->text());
}

void pingtest::on_stop_clicked()
{
    delete myprocess;
    myprocess = NULL;
}

void pingtest::on_clear_clicked()
{
    ui->result->clear();
}
