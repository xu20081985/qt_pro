/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *speed;
    QLabel *label_2;
    QLineEdit *delay;
    QLabel *label_3;
    QLineEdit *bits;
    QCheckBox *loop;
    QCheckBox *clockphase;
    QCheckBox *clockpolarity;
    QCheckBox *lsb;
    QCheckBox *cshigh;
    QCheckBox *wire;
    QCheckBox *nocs;
    QCheckBox *ready;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTextEdit *editrecv;
    QLineEdit *editsend;
    QPushButton *send;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(563, 419);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        speed = new QLineEdit(centralWidget);
        speed->setObjectName(QString::fromUtf8("speed"));
        sizePolicy.setHeightForWidth(speed->sizePolicy().hasHeightForWidth());
        speed->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(speed, 0, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        delay = new QLineEdit(centralWidget);
        delay->setObjectName(QString::fromUtf8("delay"));
        sizePolicy.setHeightForWidth(delay->sizePolicy().hasHeightForWidth());
        delay->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(delay, 1, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        bits = new QLineEdit(centralWidget);
        bits->setObjectName(QString::fromUtf8("bits"));
        sizePolicy.setHeightForWidth(bits->sizePolicy().hasHeightForWidth());
        bits->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(bits, 2, 1, 1, 1);

        loop = new QCheckBox(centralWidget);
        loop->setObjectName(QString::fromUtf8("loop"));
        sizePolicy.setHeightForWidth(loop->sizePolicy().hasHeightForWidth());
        loop->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(loop, 3, 0, 1, 1);

        clockphase = new QCheckBox(centralWidget);
        clockphase->setObjectName(QString::fromUtf8("clockphase"));
        sizePolicy.setHeightForWidth(clockphase->sizePolicy().hasHeightForWidth());
        clockphase->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(clockphase, 4, 0, 1, 2);

        clockpolarity = new QCheckBox(centralWidget);
        clockpolarity->setObjectName(QString::fromUtf8("clockpolarity"));
        sizePolicy.setHeightForWidth(clockpolarity->sizePolicy().hasHeightForWidth());
        clockpolarity->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(clockpolarity, 5, 0, 1, 2);

        lsb = new QCheckBox(centralWidget);
        lsb->setObjectName(QString::fromUtf8("lsb"));
        sizePolicy.setHeightForWidth(lsb->sizePolicy().hasHeightForWidth());
        lsb->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lsb, 6, 0, 1, 1);

        cshigh = new QCheckBox(centralWidget);
        cshigh->setObjectName(QString::fromUtf8("cshigh"));
        sizePolicy.setHeightForWidth(cshigh->sizePolicy().hasHeightForWidth());
        cshigh->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(cshigh, 7, 0, 1, 1);

        wire = new QCheckBox(centralWidget);
        wire->setObjectName(QString::fromUtf8("wire"));
        sizePolicy.setHeightForWidth(wire->sizePolicy().hasHeightForWidth());
        wire->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(wire, 8, 0, 1, 1);

        nocs = new QCheckBox(centralWidget);
        nocs->setObjectName(QString::fromUtf8("nocs"));
        sizePolicy.setHeightForWidth(nocs->sizePolicy().hasHeightForWidth());
        nocs->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(nocs, 9, 0, 1, 1);

        ready = new QCheckBox(centralWidget);
        ready->setObjectName(QString::fromUtf8("ready"));
        sizePolicy.setHeightForWidth(ready->sizePolicy().hasHeightForWidth());
        ready->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(ready, 10, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        editrecv = new QTextEdit(groupBox);
        editrecv->setObjectName(QString::fromUtf8("editrecv"));

        gridLayout->addWidget(editrecv, 0, 0, 1, 2);

        editsend = new QLineEdit(groupBox);
        editsend->setObjectName(QString::fromUtf8("editsend"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editsend->sizePolicy().hasHeightForWidth());
        editsend->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(editsend, 1, 0, 1, 1);

        send = new QPushButton(groupBox);
        send->setObjectName(QString::fromUtf8("send"));
        sizePolicy1.setHeightForWidth(send->sizePolicy().hasHeightForWidth());
        send->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(send, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 563, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "speed:", 0, QApplication::UnicodeUTF8));
        speed->setText(QApplication::translate("MainWindow", "500000", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "delay:", 0, QApplication::UnicodeUTF8));
        delay->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "bits per word:", 0, QApplication::UnicodeUTF8));
        bits->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        loop->setText(QApplication::translate("MainWindow", "loop", 0, QApplication::UnicodeUTF8));
        clockphase->setText(QApplication::translate("MainWindow", "clock phase", 0, QApplication::UnicodeUTF8));
        clockpolarity->setText(QApplication::translate("MainWindow", "clock polarity", 0, QApplication::UnicodeUTF8));
        lsb->setText(QApplication::translate("MainWindow", "LSB", 0, QApplication::UnicodeUTF8));
        cshigh->setText(QApplication::translate("MainWindow", "cs-high", 0, QApplication::UnicodeUTF8));
        wire->setText(QApplication::translate("MainWindow", "3wire", 0, QApplication::UnicodeUTF8));
        nocs->setText(QApplication::translate("MainWindow", "no-cs", 0, QApplication::UnicodeUTF8));
        ready->setText(QApplication::translate("MainWindow", "ready", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "recv", 0, QApplication::UnicodeUTF8));
        editsend->setText(QApplication::translate("MainWindow", "forlinx test text", 0, QApplication::UnicodeUTF8));
        send->setText(QApplication::translate("MainWindow", "send", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
