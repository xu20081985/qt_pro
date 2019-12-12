#ifndef CAMERA_H
#define CAMERA_H

#include <QWidget>
#include <fcntl.h>
#include <QMessageBox>
#include "imagewidget.h"

#define CLEAR(x) memset (&(x), 0, sizeof (x))

namespace Ui
{
class Camera;
}

class Camera : public QWidget
{
    Q_OBJECT
    
public:
    explicit Camera(QWidget *parent = 0);
    ~Camera();

    QWidget *parent;
    class ImageWidget *imageWidget;

    QTimer *timer;
    void closeEvent(QCloseEvent *event);

protected:
    void changeEvent(QEvent *e);


private slots:
    void on_pbt_start_clicked();

    void on_pbt_stop_clicked();
    void up_date();

private:
    Ui::Camera *ui;    




};
void errno_exit(const char* s);
int xioctl(int fd, int request, void* argp);
void deviceOpen(void);
void deviceInit(void);
void mmapInit(void);
void captureStart(void);
void mainLoop(unsigned char* src);
unsigned char* frameRead(unsigned char* src);
unsigned char* imageProcess(const void* p,unsigned char* dst);

inline int fb_init(void);
void deviceUninit(void);

#endif // CAMERA_H
