#ifndef PINGTEST_H
#define PINGTEST_H

#include <QWidget>
#include<QProcess>

namespace Ui {
class pingtest;
}

class pingtest : public QWidget
{
    Q_OBJECT
    
public:
    explicit pingtest(QWidget *parent = 0);
    ~pingtest();

private slots:
    void on_pingbtn_clicked();
    void on_stop_clicked();
    void on_clear_clicked();

    void result();

protected:
    void closeEvent(QCloseEvent *);
    void moveEvent(QMoveEvent *);
    void resizeEvent(QResizeEvent *);
    
private:
    Ui::pingtest *ui;
    QProcess* myprocess;
};

#endif // PINGTEST_H
