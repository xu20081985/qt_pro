#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <pthread.h>
namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void startEvent();
    void stopEvent();
    void timerEvent();
protected:
    void closeEvent(QCloseEvent *);
private:
    bool running;
    pid_t pid;
    Ui::MainWindow *ui;
    int top,left,imageWidth,imageHeight;
    QTimer *timer;

};

#endif // MAINWINDOW_H
