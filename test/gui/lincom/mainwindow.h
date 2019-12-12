#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
//#include "posix_qextserialport.h"

#include <QMessageBox>
#include <QFile>
#include <QInputDialog>
#include <QFileDialog>
#include <QTextStream>
#include "serialport.h"


//TIME_OUT
#define TIME_OUT 10

//read ms,200ms，
#define TIMER_INTERVAL 200

//continue ms,200ms
#define OBO_TIMER_INTERVAL 200

//TIP_FILE_SIZE
#define TIP_FILE_SIZE 5000
//MAX_FILE_SIZE
#define MAX_FILE_SIZE 10000

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void startInit();

protected:
    void changeEvent(QEvent *e);
    void setActionsEnabled(bool status);
    void setComboBoxEnabled(bool status);
    void closeEvent(QCloseEvent *);

private:
    Ui::MainWindow *ui;

//    Posix_QextSerialPort *myCom;
    SerialPort  *myCom;
//    QTimer *timer;
    QTimer *obotimer;
    unsigned int timerdly;
    unsigned int obotimerdly;
    QString write2fileName;    //
private slots:

    void on_actionWriteToFile_triggered();
    void on_actionCleanPort_triggered();
    void on_actionLoadfile_triggered();
    void on_actionReadPortInterval_triggered();
    void on_delayspinBox_valueChanged(int );
    void on_actionAdd_triggered();
    void on_actionExit_triggered();
    void on_actionSave_triggered();
    void on_obocheckBox_clicked();
    void on_actionClearBytes_triggered();

    void on_actionClose_triggered();
    void on_actionOpen_triggered();
    void on_clearUpBtn_clicked();
    void on_sendmsgBtn_clicked();
    void readMyCom();
    void sendMsg();
    //end by

};

#endif // MAINWINDOW_H
