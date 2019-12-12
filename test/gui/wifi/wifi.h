#ifndef WIFI_H
#define WIFI_H

#include <QWidget>
#include <QProcess>

namespace Ui {
class Wifi;
}

class Wifi : public QWidget
{
    Q_OBJECT
    
public:
    explicit Wifi(QWidget *parent = 0);
    ~Wifi();
    
private slots:
    void on_pbt_scan_clicked();


    void on_pbt_connect_clicked();

    void on_pbt_open_clicked();

    void readScanningOutput();

    void readConnectOutput();

    void closeEvent(QCloseEvent *);

private:
    Ui::Wifi *ui;
    QProcess*   m_cmdScanning;
    QProcess*   m_cmdConnecting;
};

#endif // WIFI_H
