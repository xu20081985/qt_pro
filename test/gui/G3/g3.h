#ifndef G3_H
#define G3_H

#include <QWidget>
#include<qbuttongroup.h>
#include<QtCore>
//i.MX6 usb3g idVendor 19d2 idProduct 0117
#define USB3GFILEINFO_VID   "/sys/devices/platform/fsl-ehci.1/usb2/2-1/2-1.1/idVendor"
#define USB3GFILEINFO_PID   "/sys/devices/platform/fsl-ehci.1/usb2/2-1/2-1.1/idProduct"
#define USB3GPATH           "/usr/"   //install path
#define DNSFILE             "/etc/resolv.conf"
#define ADFILE			    "/dev/ttyUSB3"
#define ET127               "/dev/ttyACM0"

namespace Ui {
class G3;
}

class G3 : public QWidget
{
    Q_OBJECT
    
public:
    explicit G3(QWidget *parent = 0);
    ~G3();
protected:
    void closeEvent(QCloseEvent *);
    
private slots:
    void on_pbt_connect_clicked();
    void readOutput();
private:
    Ui::G3 *ui;
    QButtonGroup *BG;
    QProcess*   m_cmdPrepare;
    QProcess*   m_cmdDialup;

    bool m_bConnect;
    int m_nType; //0=3G   1=WIFI
    int m_nChildType;//0-0  wcdma  0-1 cdma2000  0-2 tdscdma

};

#endif // G3_H
