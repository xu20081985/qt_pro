#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
}

MainWindow::~MainWindow()
{

}
void MainWindow::initLab(int num,QRect rect)
{

        setGeometry(rect);
        lab=new QLabel("this is desktop"+QString::number(num+1),this);
        lab->setGeometry(0,0,rect.width(),rect.height());
        lab->setAlignment(Qt::AlignCenter);
        dialog=new QDialog(this);
        dialog->setGeometry(100+num*1280,500,500,300);


}




