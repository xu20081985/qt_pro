#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow> 
#include<QLabel>
#include<QDialog>
class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    QLabel *lab;

public:
    QDialog *dialog;
    void initLab(int num,QRect rect);


};

#endif // MAINWINDOW_H
