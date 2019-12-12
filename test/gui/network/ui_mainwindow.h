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
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qipaddressedit.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *ok;
    QComboBox *cb_interface;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_6;
    QRadioButton *radio_dhcp;
    QRadioButton *radio_static;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QIpAddressEdit *edt_ip;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QIpAddressEdit *edt_mask;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QIpAddressEdit *edt_gateway;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QIpAddressEdit *edt_dns;
    QGridLayout *gridLayout_7;
    QLabel *label_51;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        ok = new QPushButton(centralWidget);
        ok->setObjectName(QString::fromUtf8("ok"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ok->sizePolicy().hasHeightForWidth());
        ok->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(ok, 2, 0, 1, 4);

        cb_interface = new QComboBox(centralWidget);
        cb_interface->setObjectName(QString::fromUtf8("cb_interface"));
        sizePolicy1.setHeightForWidth(cb_interface->sizePolicy().hasHeightForWidth());
        cb_interface->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(cb_interface, 0, 1, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        radio_dhcp = new QRadioButton(groupBox);
        radio_dhcp->setObjectName(QString::fromUtf8("radio_dhcp"));
        sizePolicy2.setHeightForWidth(radio_dhcp->sizePolicy().hasHeightForWidth());
        radio_dhcp->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(radio_dhcp, 0, 0, 1, 1);

        radio_static = new QRadioButton(groupBox);
        radio_static->setObjectName(QString::fromUtf8("radio_static"));
        sizePolicy2.setHeightForWidth(radio_static->sizePolicy().hasHeightForWidth());
        radio_static->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(radio_static, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_6);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        edt_ip = new QIpAddressEdit(groupBox);
        edt_ip->setObjectName(QString::fromUtf8("edt_ip"));
        sizePolicy.setHeightForWidth(edt_ip->sizePolicy().hasHeightForWidth());
        edt_ip->setSizePolicy(sizePolicy);
        edt_ip->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(edt_ip, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        edt_mask = new QIpAddressEdit(groupBox);
        edt_mask->setObjectName(QString::fromUtf8("edt_mask"));
        sizePolicy.setHeightForWidth(edt_mask->sizePolicy().hasHeightForWidth());
        edt_mask->setSizePolicy(sizePolicy);
        edt_mask->setMinimumSize(QSize(0, 40));

        gridLayout_3->addWidget(edt_mask, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        edt_gateway = new QIpAddressEdit(groupBox);
        edt_gateway->setObjectName(QString::fromUtf8("edt_gateway"));
        sizePolicy.setHeightForWidth(edt_gateway->sizePolicy().hasHeightForWidth());
        edt_gateway->setSizePolicy(sizePolicy);
        edt_gateway->setMinimumSize(QSize(0, 40));

        gridLayout_4->addWidget(edt_gateway, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(label_5, 0, 0, 1, 1);

        edt_dns = new QIpAddressEdit(groupBox);
        edt_dns->setObjectName(QString::fromUtf8("edt_dns"));
        sizePolicy.setHeightForWidth(edt_dns->sizePolicy().hasHeightForWidth());
        edt_dns->setSizePolicy(sizePolicy);
        edt_dns->setMinimumSize(QSize(0, 40));

        gridLayout_5->addWidget(edt_dns, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_5);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_51 = new QLabel(groupBox);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        sizePolicy2.setHeightForWidth(label_51->sizePolicy().hasHeightForWidth());
        label_51->setSizePolicy(sizePolicy2);

        gridLayout_7->addWidget(label_51, 2, 0, 1, 1);

        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_7->addWidget(textEdit, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_7);


        gridLayout->addWidget(groupBox, 1, 0, 1, 4);


        horizontalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 637, 25));
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
        label->setText(QApplication::translate("MainWindow", "              interface:", 0, QApplication::UnicodeUTF8));
        ok->setText(QApplication::translate("MainWindow", "Apply and Restart Network", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        radio_dhcp->setText(QApplication::translate("MainWindow", "DHCP", 0, QApplication::UnicodeUTF8));
        radio_static->setText(QApplication::translate("MainWindow", "STATIC", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "ip:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "netmask:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "gateway:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "dns:", 0, QApplication::UnicodeUTF8));
        label_51->setText(QApplication::translate("MainWindow", "information:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
