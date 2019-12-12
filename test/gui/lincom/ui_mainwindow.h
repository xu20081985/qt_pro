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
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd;
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionExit;
    QAction *action;
    QAction *actionSave;
    QAction *actionClearBytes;
    QAction *actionReadPortInterval;
    QAction *actionLoadfile;
    QAction *actionCleanPort;
    QAction *actionWriteToFile;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_6;
    QComboBox *portNameComboBox;
    QComboBox *baudRateComboBox;
    QComboBox *dataBitsComboBox;
    QComboBox *parityComboBox;
    QComboBox *stopBitsComboBox;
    QSpinBox *delayspinBox;
    QGroupBox *groupBox_2;
    QFrame *frame_3;
    QRadioButton *ccradioButton;
    QRadioButton *chradioButton;
    QRadioButton *dcradioButton;
    QLCDNumber *recvbyteslcdNumber;
    QPushButton *clearUpBtn;
    QTextBrowser *textBrowser;
    QLineEdit *sendMsgLineEdit;
    QCheckBox *obocheckBox;
    QPushButton *sendmsgBtn;
    QLabel *label_7;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(565, 320);
        MainWindow->setMinimumSize(QSize(565, 320));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(9);
        MainWindow->setFont(font);
        MainWindow->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        MainWindow->setStyleSheet(QString::fromUtf8("QDialog{background:rgb(229, 255, 239)}\n"
"QMenuBar{background:url(:/new/prefix2/src/header.bmp)}\n"
"QStatusBar{background:url(:/new/prefix2/src/header.bmp)}\n"
"QPushButton{background:url(:/new/prefix2/src/header.bmp)}\n"
"QLCDNumber{background:url(:/new/prefix2/src/lcd.bmp)}\n"
"QLabel{background:url(:/new/prefix2/src/header.bmp)}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        MainWindow->setIconSize(QSize(16, 16));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setAnimated(true);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        actionAdd->setCheckable(false);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/src/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/src/mesage.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionClearBytes = new QAction(MainWindow);
        actionClearBytes->setObjectName(QString::fromUtf8("actionClearBytes"));
        actionReadPortInterval = new QAction(MainWindow);
        actionReadPortInterval->setObjectName(QString::fromUtf8("actionReadPortInterval"));
        actionLoadfile = new QAction(MainWindow);
        actionLoadfile->setObjectName(QString::fromUtf8("actionLoadfile"));
        actionCleanPort = new QAction(MainWindow);
        actionCleanPort->setObjectName(QString::fromUtf8("actionCleanPort"));
        actionWriteToFile = new QAction(MainWindow);
        actionWriteToFile->setObjectName(QString::fromUtf8("actionWriteToFile"));
        actionWriteToFile->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 171, 271));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        groupBox->setFlat(false);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(7, 70, 51, 17));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(7, 115, 61, 17));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(7, 155, 71, 17));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(7, 197, 61, 16));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(7, 36, 41, 20));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFrameShadow(QFrame::Plain);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(9, 244, 63, 17));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        portNameComboBox = new QComboBox(groupBox);
        portNameComboBox->setObjectName(QString::fromUtf8("portNameComboBox"));
        portNameComboBox->setGeometry(QRect(80, 30, 84, 27));
        baudRateComboBox = new QComboBox(groupBox);
        baudRateComboBox->setObjectName(QString::fromUtf8("baudRateComboBox"));
        baudRateComboBox->setGeometry(QRect(80, 70, 84, 27));
        dataBitsComboBox = new QComboBox(groupBox);
        dataBitsComboBox->setObjectName(QString::fromUtf8("dataBitsComboBox"));
        dataBitsComboBox->setGeometry(QRect(80, 110, 84, 27));
        parityComboBox = new QComboBox(groupBox);
        parityComboBox->setObjectName(QString::fromUtf8("parityComboBox"));
        parityComboBox->setGeometry(QRect(80, 150, 84, 27));
        stopBitsComboBox = new QComboBox(groupBox);
        stopBitsComboBox->setObjectName(QString::fromUtf8("stopBitsComboBox"));
        stopBitsComboBox->setGeometry(QRect(80, 190, 84, 27));
        delayspinBox = new QSpinBox(groupBox);
        delayspinBox->setObjectName(QString::fromUtf8("delayspinBox"));
        delayspinBox->setGeometry(QRect(80, 237, 84, 27));
        delayspinBox->setMinimum(10);
        delayspinBox->setMaximum(5000);
        delayspinBox->setValue(200);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(190, 10, 371, 201));
        groupBox_2->setStyleSheet(QString::fromUtf8(""));
        groupBox_2->setFlat(true);
        frame_3 = new QFrame(groupBox_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(8, 28, 361, 41));
        frame_3->setStyleSheet(QString::fromUtf8(""));
        frame_3->setFrameShape(QFrame::WinPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_3->setLineWidth(1);
        frame_3->setMidLineWidth(0);
        ccradioButton = new QRadioButton(frame_3);
        ccradioButton->setObjectName(QString::fromUtf8("ccradioButton"));
        ccradioButton->setGeometry(QRect(11, 13, 58, 22));
        ccradioButton->setChecked(false);
        chradioButton = new QRadioButton(frame_3);
        chradioButton->setObjectName(QString::fromUtf8("chradioButton"));
        chradioButton->setGeometry(QRect(70, 13, 61, 22));
        dcradioButton = new QRadioButton(frame_3);
        dcradioButton->setObjectName(QString::fromUtf8("dcradioButton"));
        dcradioButton->setGeometry(QRect(135, 13, 61, 22));
        recvbyteslcdNumber = new QLCDNumber(frame_3);
        recvbyteslcdNumber->setObjectName(QString::fromUtf8("recvbyteslcdNumber"));
        recvbyteslcdNumber->setGeometry(QRect(210, 12, 64, 23));
        recvbyteslcdNumber->setStyleSheet(QString::fromUtf8(""));
        clearUpBtn = new QPushButton(frame_3);
        clearUpBtn->setObjectName(QString::fromUtf8("clearUpBtn"));
        clearUpBtn->setGeometry(QRect(280, 10, 71, 27));
        textBrowser = new QTextBrowser(groupBox_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(9, 70, 361, 121));
        textBrowser->setStyleSheet(QString::fromUtf8(""));
        sendMsgLineEdit = new QLineEdit(centralWidget);
        sendMsgLineEdit->setObjectName(QString::fromUtf8("sendMsgLineEdit"));
        sendMsgLineEdit->setGeometry(QRect(201, 250, 291, 27));
        sendMsgLineEdit->setMaxLength(10000);
        sendMsgLineEdit->setDragEnabled(false);
        obocheckBox = new QCheckBox(centralWidget);
        obocheckBox->setObjectName(QString::fromUtf8("obocheckBox"));
        obocheckBox->setGeometry(QRect(281, 217, 101, 22));
        sendmsgBtn = new QPushButton(centralWidget);
        sendmsgBtn->setObjectName(QString::fromUtf8("sendmsgBtn"));
        sendmsgBtn->setGeometry(QRect(501, 250, 61, 27));
        sendmsgBtn->setAutoDefault(false);
        sendmsgBtn->setDefault(false);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(201, 220, 62, 17));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_7->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setMinimumSize(QSize(0, 0));
        mainToolBar->setMaximumSize(QSize(16777215, 55));
        QFont font2;
        font2.setPointSize(9);
        mainToolBar->setFont(font2);
        mainToolBar->setCursor(QCursor(Qt::PointingHandCursor));
        mainToolBar->setFocusPolicy(Qt::StrongFocus);
        mainToolBar->setContextMenuPolicy(Qt::NoContextMenu);
        mainToolBar->setMovable(false);
        mainToolBar->setAllowedAreas(Qt::NoToolBarArea);
        mainToolBar->setIconSize(QSize(24, 24));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        mainToolBar->setFloatable(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionClose);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAdd);
        mainToolBar->addAction(actionReadPortInterval);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionClearBytes);
        mainToolBar->addAction(actionCleanPort);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        baudRateComboBox->setCurrentIndex(12);
        dataBitsComboBox->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Lincom", 0, QApplication::UnicodeUTF8));
        actionAdd->setText(QApplication::translate("MainWindow", "addport", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAdd->setToolTip(QApplication::translate("MainWindow", "addport", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionAdd->setStatusTip(QApplication::translate("MainWindow", "addport", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionOpen->setText(QApplication::translate("MainWindow", "openport", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionOpen->setStatusTip(QApplication::translate("MainWindow", "open", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionClose->setText(QApplication::translate("MainWindow", "closeport", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionClose->setStatusTip(QApplication::translate("MainWindow", "closeport", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionExit->setStatusTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        action->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216Lincom", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action->setToolTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216Lincom", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        action->setStatusTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216Lincom", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSave->setText(QApplication::translate("MainWindow", "savedata", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "savedata", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSave->setStatusTip(QApplication::translate("MainWindow", "savedata", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionClearBytes->setText(QApplication::translate("MainWindow", "clear", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionClearBytes->setToolTip(QApplication::translate("MainWindow", "clear", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionClearBytes->setStatusTip(QApplication::translate("MainWindow", "clear", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionReadPortInterval->setText(QApplication::translate("MainWindow", "readms", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionReadPortInterval->setToolTip(QApplication::translate("MainWindow", "read ms", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionReadPortInterval->setStatusTip(QApplication::translate("MainWindow", "read ms", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionLoadfile->setText(QApplication::translate("MainWindow", "readfile", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLoadfile->setToolTip(QApplication::translate("MainWindow", "read file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionLoadfile->setStatusTip(QApplication::translate("MainWindow", "read file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionCleanPort->setText(QApplication::translate("MainWindow", "clearport", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCleanPort->setToolTip(QApplication::translate("MainWindow", "clearport", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionCleanPort->setStatusTip(QApplication::translate("MainWindow", "clearport", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionWriteToFile->setText(QApplication::translate("MainWindow", "writefile", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWriteToFile->setToolTip(QApplication::translate("MainWindow", "writefile", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionWriteToFile->setStatusTip(QApplication::translate("MainWindow", "writefile", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        groupBox->setTitle(QApplication::translate("MainWindow", "portset", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "bound:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "databits:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "parity:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "stopbits:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "port:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "ms:", 0, QApplication::UnicodeUTF8));
        portNameComboBox->clear();
        portNameComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ttymxc1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ttymxc2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ttymxc3", 0, QApplication::UnicodeUTF8)
        );
        baudRateComboBox->clear();
        baudRateComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "75", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "110", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "134", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "150", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "300", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "4800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "9600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "14400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "19200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "38400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "56000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "57600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "76800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "115200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "128000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "256000", 0, QApplication::UnicodeUTF8)
        );
        dataBitsComboBox->clear();
        dataBitsComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8)
        );
        parityComboBox->clear();
        parityComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "N", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "O", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "E", 0, QApplication::UnicodeUTF8)
        );
        stopBitsComboBox->clear();
        stopBitsComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1.5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8)
        );
        groupBox_2->setTitle(QApplication::translate("MainWindow", "receive", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ccradioButton->setToolTip(QApplication::translate("MainWindow", "\344\273\245\345\255\227\347\254\246\347\232\204\346\226\271\345\274\217\345\217\221\351\200\201\345\222\214\346\216\245\346\224\266\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ccradioButton->setText(QApplication::translate("MainWindow", "char", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        chradioButton->setToolTip(QApplication::translate("MainWindow", "\344\273\245\345\255\227\347\254\246\346\226\271\345\274\217\345\217\221\351\200\201, \344\273\245\345\215\201\345\205\255\350\277\233\345\210\266\346\226\271\345\274\217\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        chradioButton->setText(QApplication::translate("MainWindow", "HEX", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        dcradioButton->setToolTip(QApplication::translate("MainWindow", "\344\273\245\345\255\227\347\254\246\346\226\271\345\274\217\345\217\221\351\200\201, \344\273\245\345\215\201\350\277\233\345\210\266\346\226\271\345\274\217\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        dcradioButton->setText(QApplication::translate("MainWindow", "DEC", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        recvbyteslcdNumber->setToolTip(QApplication::translate("MainWindow", "\345\267\262\346\216\245\346\224\266\345\255\227\350\212\202\346\225\260", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clearUpBtn->setText(QApplication::translate("MainWindow", "clear", 0, QApplication::UnicodeUTF8));
        obocheckBox->setText(QApplication::translate("MainWindow", "continue", 0, QApplication::UnicodeUTF8));
        sendmsgBtn->setText(QApplication::translate("MainWindow", "send", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "send:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
