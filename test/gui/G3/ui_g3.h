/********************************************************************************
** Form generated from reading UI file 'g3.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_G3_H
#define UI_G3_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_G3
{
public:
    QRadioButton *rb_wcdma;
    QRadioButton *rb_cdma2000;
    QRadioButton *rb_tdscdma;
    QPushButton *pbt_connect;
    QTextEdit *textEdit;
    QRadioButton *rb_wcdma_210;

    void setupUi(QWidget *G3)
    {
        if (G3->objectName().isEmpty())
            G3->setObjectName(QString::fromUtf8("G3"));
        G3->resize(391, 246);
        rb_wcdma = new QRadioButton(G3);
        rb_wcdma->setObjectName(QString::fromUtf8("rb_wcdma"));
        rb_wcdma->setGeometry(QRect(260, 20, 81, 22));
        rb_cdma2000 = new QRadioButton(G3);
        rb_cdma2000->setObjectName(QString::fromUtf8("rb_cdma2000"));
        rb_cdma2000->setGeometry(QRect(260, 100, 109, 22));
        rb_tdscdma = new QRadioButton(G3);
        rb_tdscdma->setObjectName(QString::fromUtf8("rb_tdscdma"));
        rb_tdscdma->setGeometry(QRect(260, 140, 109, 22));
        pbt_connect = new QPushButton(G3);
        pbt_connect->setObjectName(QString::fromUtf8("pbt_connect"));
        pbt_connect->setGeometry(QRect(270, 200, 93, 27));
        textEdit = new QTextEdit(G3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 10, 211, 211));
        rb_wcdma_210 = new QRadioButton(G3);
        rb_wcdma_210->setObjectName(QString::fromUtf8("rb_wcdma_210"));
        rb_wcdma_210->setGeometry(QRect(260, 60, 121, 22));

        retranslateUi(G3);

        QMetaObject::connectSlotsByName(G3);
    } // setupUi

    void retranslateUi(QWidget *G3)
    {
        G3->setWindowTitle(QApplication::translate("G3", "G3", 0, QApplication::UnicodeUTF8));
        rb_wcdma->setText(QApplication::translate("G3", "WCDMA", 0, QApplication::UnicodeUTF8));
        rb_cdma2000->setText(QApplication::translate("G3", "CDMA2000", 0, QApplication::UnicodeUTF8));
        rb_tdscdma->setText(QApplication::translate("G3", "TD-SCDMA", 0, QApplication::UnicodeUTF8));
        pbt_connect->setText(QApplication::translate("G3", "connect", 0, QApplication::UnicodeUTF8));
        rb_wcdma_210->setText(QApplication::translate("G3", "wcdma-mf210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class G3: public Ui_G3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_G3_H
