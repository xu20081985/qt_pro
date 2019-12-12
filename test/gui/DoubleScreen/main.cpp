#include <QtGui/QApplication>
#include "mainwindow.h"
#include <QDesktopWidget>
#include<QFont>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDesktopWidget desktop;
    QFont font=a.font();
    font.setPointSize(100);
    a.setFont(font);
    int n=desktop.screenCount();
    MainWindow w[n];
    for(int i=0;i<n;i++)
    {
    w[i].initLab(i,desktop.screenGeometry(i));
    w[i].show();
    }
    w[0].dialog->exec();
    
    return a.exec();
}
