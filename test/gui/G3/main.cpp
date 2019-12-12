#include <QtGui/QApplication>
#include "g3.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    G3 w;
    w.setWindowFlags(w.windowFlags()& ~Qt::WindowMaximizeButtonHint& ~Qt::WindowMinimizeButtonHint );
    w.showMaximized();
    
    return a.exec();
}
