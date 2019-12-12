/********************************************************************************
** Form generated from reading UI file 'pingtest.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINGTEST_H
#define UI_PINGTEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pingtest
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_2;
    QTextEdit *result;
    QPushButton *clear;
    QPushButton *stop;
    QPushButton *pingbtn;
    QLineEdit *hostname;

    void setupUi(QWidget *pingtest)
    {
        if (pingtest->objectName().isEmpty())
            pingtest->setObjectName(QString::fromUtf8("pingtest"));
        pingtest->resize(705, 470);
        menuBar = new QMenuBar(pingtest);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 705, 25));
        mainToolBar = new QToolBar(pingtest);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setGeometry(QRect(0, 0, 100, 30));
        statusBar = new QStatusBar(pingtest);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setGeometry(QRect(0, 0, 100, 30));
        horizontalLayout = new QHBoxLayout(pingtest);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(pingtest);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        groupBox = new QGroupBox(pingtest);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        result = new QTextEdit(groupBox);
        result->setObjectName(QString::fromUtf8("result"));

        gridLayout_2->addWidget(result, 0, 0, 1, 3);

        clear = new QPushButton(groupBox);
        clear->setObjectName(QString::fromUtf8("clear"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(clear, 1, 2, 1, 1);

        stop = new QPushButton(groupBox);
        stop->setObjectName(QString::fromUtf8("stop"));
        sizePolicy1.setHeightForWidth(stop->sizePolicy().hasHeightForWidth());
        stop->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(stop, 1, 1, 1, 1);

        pingbtn = new QPushButton(groupBox);
        pingbtn->setObjectName(QString::fromUtf8("pingbtn"));
        sizePolicy1.setHeightForWidth(pingbtn->sizePolicy().hasHeightForWidth());
        pingbtn->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pingbtn, 1, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);


        gridLayout->addWidget(groupBox, 1, 0, 1, 2);

        hostname = new QLineEdit(pingtest);
        hostname->setObjectName(QString::fromUtf8("hostname"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(hostname->sizePolicy().hasHeightForWidth());
        hostname->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(hostname, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(pingtest);

        QMetaObject::connectSlotsByName(pingtest);
    } // setupUi

    void retranslateUi(QWidget *pingtest)
    {
        pingtest->setWindowTitle(QApplication::translate("pingtest", "pingtest", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pingtest", "hostname:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("pingtest", "result", 0, QApplication::UnicodeUTF8));
        clear->setText(QApplication::translate("pingtest", "clear", 0, QApplication::UnicodeUTF8));
        stop->setText(QApplication::translate("pingtest", "stop", 0, QApplication::UnicodeUTF8));
        pingbtn->setText(QApplication::translate("pingtest", "ping", 0, QApplication::UnicodeUTF8));
        hostname->setText(QApplication::translate("pingtest", "192.168.1.10", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pingtest: public Ui_pingtest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINGTEST_H
