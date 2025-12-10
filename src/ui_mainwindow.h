/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *MainStack;
    QWidget *page;
    QCheckBox *checkBox;
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Enter;
    QPushButton *ins;
    QPushButton *Agreement;
    QWidget *page_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *hint;
    QSpacerItem *horizontalSpacer_4;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *prePage;
    QPushButton *nextPage;
    QPushButton *submit;
    QSpacerItem *horizontalSpacer_3;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QLabel *pageHint;
    QSpacerItem *horizontalSpacer_7;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QTableWidget *Main_table;
    QWidget *page_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_9;
    QLabel *temps;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_7;
    QLabel *raw;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_8;
    QLabel *res;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MainStack = new QStackedWidget(centralwidget);
        MainStack->setObjectName("MainStack");
        MainStack->setGeometry(QRect(0, 0, 800, 600));
        page = new QWidget();
        page->setObjectName("page");
        checkBox = new QCheckBox(page);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(150, 380, 431, 20));
        QFont font;
        font.setPointSize(12);
        checkBox->setFont(font);
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 20, 411, 131));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\347\255\211\347\272\277")});
        font1.setPointSize(28);
        label->setFont(font1);
        textBrowser = new QTextBrowser(page);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(110, 130, 571, 192));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(530, 530, 201, 20));
        horizontalLayoutWidget = new QWidget(page);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(60, 420, 640, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Enter = new QPushButton(horizontalLayoutWidget);
        Enter->setObjectName("Enter");

        horizontalLayout->addWidget(Enter);

        ins = new QPushButton(horizontalLayoutWidget);
        ins->setObjectName("ins");

        horizontalLayout->addWidget(ins);

        Agreement = new QPushButton(horizontalLayoutWidget);
        Agreement->setObjectName("Agreement");

        horizontalLayout->addWidget(Agreement);

        MainStack->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        horizontalLayoutWidget_3 = new QWidget(page_2);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(10, 450, 781, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        hint = new QLabel(horizontalLayoutWidget_3);
        hint->setObjectName("hint");

        horizontalLayout_3->addWidget(hint);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayoutWidget_2 = new QWidget(page_2);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(10, 370, 781, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        prePage = new QPushButton(horizontalLayoutWidget_2);
        prePage->setObjectName("prePage");

        horizontalLayout_2->addWidget(prePage);

        nextPage = new QPushButton(horizontalLayoutWidget_2);
        nextPage->setObjectName("nextPage");

        horizontalLayout_2->addWidget(nextPage);

        submit = new QPushButton(horizontalLayoutWidget_2);
        submit->setObjectName("submit");

        horizontalLayout_2->addWidget(submit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalLayoutWidget_4 = new QWidget(page_2);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(10, 410, 781, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        pageHint = new QLabel(horizontalLayoutWidget_4);
        pageHint->setObjectName("pageHint");

        horizontalLayout_4->addWidget(pageHint);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        horizontalLayoutWidget_5 = new QWidget(page_2);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(10, 0, 781, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_5->addWidget(pushButton_3);

        Main_table = new QTableWidget(page_2);
        if (Main_table->columnCount() < 6)
            Main_table->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Main_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Main_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Main_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Main_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Main_table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        Main_table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        Main_table->setObjectName("Main_table");
        Main_table->setGeometry(QRect(10, 30, 800, 341));
        QFont font2;
        font2.setPointSize(9);
        Main_table->setFont(font2);
        Main_table->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(200, 200, 200);\n"
"alternate-background-color: rgb(210, 239, 255);"));
        Main_table->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        Main_table->setRowCount(0);
        Main_table->horizontalHeader()->setHighlightSections(false);
        Main_table->verticalHeader()->setVisible(false);
        Main_table->verticalHeader()->setHighlightSections(false);
        MainStack->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        layoutWidget = new QWidget(page_3);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 431, 191));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        QFont font3;
        font3.setPointSize(18);
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        QFont font4;
        font4.setPointSize(11);
        label_9->setFont(font4);
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_13->addWidget(label_9);

        temps = new QLabel(layoutWidget);
        temps->setObjectName("temps");
        QFont font5;
        font5.setPointSize(13);
        temps->setFont(font5);
        temps->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_13->addWidget(temps);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font4);
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_11->addWidget(label_7);

        raw = new QLabel(layoutWidget);
        raw->setObjectName("raw");
        raw->setFont(font5);
        raw->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_11->addWidget(raw);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font4);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_12->addWidget(label_8);

        res = new QLabel(layoutWidget);
        res->setObjectName("res");
        res->setFont(font5);
        res->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_12->addWidget(res);


        verticalLayout_2->addLayout(horizontalLayout_12);

        textBrowser_2 = new QTextBrowser(page_3);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(430, 0, 371, 192));
        textBrowser_3 = new QTextBrowser(page_3);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(0, 210, 801, 111));
        pushButton = new QPushButton(page_3);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 380, 111, 51));
        MainStack->addWidget(page_3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        MainStack->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "      \346\210\221\345\267\262\351\230\205\350\257\273\347\224\250\346\210\267\344\275\277\347\224\250\345\215\217\350\256\256\345\271\266\345\205\205\345\210\206\347\220\206\350\247\243\345\222\214\345\220\214\346\204\217\345\205\266\344\270\255\347\232\204\345\206\205\345\256\271\343\200\202", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\256\227(Zung)\346\260\217\346\212\221\351\203\201\350\207\252\350\257\204\351\207\217\350\241\250", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\344\275\240\345\245\275\357\274\214\346\234\213\345\217\213\357\274\201\345\275\223\344\275\240\346\211\223\345\274\200\350\277\231\344\270\252\347\250\213\345\272\217\346\227\266\357\274\214\344\275\240\346\234\200\350\277\221\344\270\200\345\256\232\351\201\207\345\210\260\344\272\206\344\270\200\344\272\233\344\270\215\351\241\272\345\277"
                        "\203\347\232\204\344\272\213\346\203\205\345\220\247\343\200\202</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\346\210\221\344\273\254\346\235\245\351\200\232\350\277\207\350\277\231\344\273\275\350\207\252\346\237\245\351\227\256\345\215\267\344\270\272\344\275\240\346\217\220\344\276\233\344\270\200\344\272\233\345\273\272\350\256\256\343\200\202</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700; color:#9a2022;\">\350\257\267\345\205\210\346\216\245\345\217\227\347\224\250\346\210\267\344\275\277\347\224\250\345\215\217\350\256\256\357"
                        "\274\214\345\206\215\350\277\233\345\205\245\346\265\213\350\257\225</span><span style=\" font-size:12pt; color:#9a2022;\">\343\200\202</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; color:#9a2022;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\347\255\224\346\241\210\346\262\241\346\234\211\345\257\271\351\224\231\344\271\213\345\210\206\357\274\214\346\240\271\346\215\256\344\275\240\350\277\221\344\270\200\345\221\250\347\232\204\347\234\237\345\256\236\347\212\266\345\206\265\345\241\253\345\206\231\345\215\263\345\217\257\343\200\202</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\344\275"
                        "\240\345\217\257\344\273\245\351\232\217\346\227\266\346\237\245\347\234\213\350\257\264\346\230\216\343\200\202</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\347\245\235\344\275\240\345\256\211\345\245\275\343\200\202</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "12/09/25 Made by Sayori D.Ritera", nullptr));
        Enter->setText(QCoreApplication::translate("MainWindow", "\350\277\233\345\205\245\346\265\213\350\257\204", nullptr));
        ins->setText(QCoreApplication::translate("MainWindow", "\351\207\217\350\241\250\350\257\264\346\230\216", nullptr));
        Agreement->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\344\275\277\347\224\250\345\215\217\350\256\256", nullptr));
        hint->setText(QString());
        prePage->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\270\200\351\241\265", nullptr));
        nextPage->setText(QCoreApplication::translate("MainWindow", "\344\270\213\344\270\200\351\241\265", nullptr));
        submit->setText(QCoreApplication::translate("MainWindow", "\346\217\220\344\272\244", nullptr));
        pageHint->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\350\257\264\346\230\216", nullptr));
        QTableWidgetItem *___qtablewidgetitem = Main_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\351\242\230\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = Main_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\351\242\230\347\233\256\346\217\217\350\277\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = Main_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\345\201\266\346\234\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = Main_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\346\234\211\346\227\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = Main_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\347\273\217\345\270\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = Main_table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\346\214\201\347\273\255", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\200\273\351\241\271\347\233\256\346\225\260        20", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\227\266", nullptr));
        temps->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\216\237\345\247\213\345\210\206", nullptr));
        raw->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\346\240\207\345\207\206\345\210\206", nullptr));
        res->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\345\205\263\344\272\216\346\212\221\351\203\201\347\227\207\347\212\266\347\232\204\344\270\264\345\272\212\345\210\206\347\272\247\357\274\214\351\231\244\345\217\202\350\200\203\351\207\217\350\241\250\345\210\206\345\200\274\345\244\226\357\274\214\344\270\273\350\246\201\350\277\230\345\272\224\346\240\271\346\215\256\344\270\264\345\272\212\347\227\207\347"
                        "\212\266\347\211\271\345\210\253\346\230\257\350\246\201\345\256\263\347\227\207\347\212\266\347\232\204\347\250\213\345\272\246\346\235\245\345\210\222\345\210\206\357\274\214\351\207\217\350\241\250\346\200\273\345\210\206\345\200\274\344\273\205\350\203\275\344\275\234\344\270\272\344\270\200\351\241\271\345\217\202\350\200\203\346\214\207\346\240\207\350\200\214\351\235\236\347\273\235\345\257\271\346\240\207\345\207\206\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\350\257\245\351\207\217\350\241\250\350\257\204\345\256\232\347\232\204\346\230\257</span><span style=\" font-size:12pt; font-weight:700;\">\346\212\221\351\203\201\347\250\213\345\272\246</span><span style=\" font-size:10pt;\">\357\274\214"
                        "</span><span style=\" font-size:12pt; font-weight:700;\">\344\270\215\350\203\275\344\275\234\344\270\272\346\234\211\346\227\240\346\212\221\351\203\201\347\227\207\347\232\204\345\210\244\346\226\255</span><span style=\" font-size:10pt;\">\343\200\202\346\212\221\351\203\201\347\227\207\347\232\204\350\257\212\346\226\255\346\230\257\344\270\200\344\270\252\351\235\236\345\270\270\344\270\223\344\270\232\347\232\204\350\277\207\347\250\213\357\274\214\344\273\205\350\203\275\347\224\261\347\262\276\347\245\236\347\247\221\347\232\204\344\270\264\345\272\212\345\214\273\347\224\237\345\201\232\345\207\272\357\274\214\344\270\224\347\273\223\350\256\272\345\205\267\346\234\211\346\263\225\345\276\213\346\225\210\345\272\224\343\200\202\345\214\205\346\213\254\344\270\223\344\270\232\347\232\204\345\277\203\347\220\206\345\222\250\350\257\242\345\270\210\345\234\250\345\206\205\357\274\214\351\235\236\347\262\276\347\245\236\347\247\221\344\270\264\345\272\212\345\214\273\347\224\237\346\227\240\346\235\203\344"
                        "\270\213\346\212\221\351\203\201\347\227\207\347\232\204\350\257\212\346\226\255\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Helvetica Neue','PingFang SC','Microsoft YaHei','Source"
                        " Han Sans SC','Noto Sans CJK SC','WenQuanYi Micro Hei','MiSans L3','Segoe UI','sans-serif'; font-size:medium; color:#191b1f; background-color:#ffffff;\">\346\214\211\347\205\247\344\270\255\345\233\275\345\270\270\346\250\241\347\273\223\346\236\234\357\274\214</span><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Helvetica Neue','PingFang SC','Microsoft YaHei','Source Han Sans SC','Noto Sans CJK SC','WenQuanYi Micro Hei','MiSans L3','Segoe UI','sans-serif'; font-size:medium; font-weight:600; color:#191b1f; background-color:#ffffff;\">SDS</span><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Helvetica Neue','PingFang SC','Microsoft YaHei','Source Han Sans SC','Noto Sans CJK SC','WenQuanYi Micro Hei','MiSans L3','Segoe UI','sans-serif'; font-size:medium; font-weight:600; color:#ff5500; background-color:#ffffff;\">\346\240\207\345\207\206\345\210\206</span><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Helvetica Neue','PingFang SC','Microsoft YaHei','Source Han"
                        " Sans SC','Noto Sans CJK SC','WenQuanYi Micro Hei','MiSans L3','Segoe UI','sans-serif'; font-size:medium; font-weight:600; color:#191b1f; background-color:#ffffff;\">\347\232\204\345\210\206\347\225\214\345\200\274\344\270\27253\345\210\206\357\274\214\345\205\266\344\270\25553\357\275\23662\345\210\206\344\270\272\350\275\273\345\272\246\346\212\221\351\203\201\357\274\21463\357\275\23672\345\210\206\344\270\272\344\270\255\345\272\246\346\212\221\351\203\201\357\274\21472\345\210\206\344\273\245\344\270\212\344\270\272\351\207\215\345\272\246\346\212\221\351\203\201\343\200\202</span></p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'ui-sans-serif','system-ui','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-size:10pt; font-weight:700; color:#1f2329; background-color:#ffffff;\">\346\234\254\346\265\213\350\257\225\347\273\223\346\236\234\345\237\272\344\272\216SDS\351\207\217\350\241\250\350\256\276\350\256\241\357\274\214\344\273\205\344\270\272\350"
                        "\207\252\346\210\221\350\257\204\344\274\260\345\217\202\350\200\203\357\274\214\345\234\250\344\273\273\344\275\225\345\234\272\345\220\210\344\270\213\344\270\215\346\236\204\346\210\220\345\214\273\345\255\246\350\257\212\346\226\255\346\210\226\346\262\273\347\226\227\344\276\235\346\215\256\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'ui-sans-serif','system-ui','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-size:10pt; color:#1f2329; background-color:#ffffff;\">\346\265\213\350\257\225\346\225\260\346\215\256\347\224\261\347\224\250\346\210\267\350\207\252\350\241\214\345\241\253\345\206\231\357\274\214\347\273\223\346\236\234\345\207\206\347\241\256\346\200\247\344\276\235\350\265\226\344\272\216\345\241\253\345\206\231\347\234\237\345\256\236\346\200\247\357\274\214\350\275\257\344\273\266\344\270\215\346\211\277\346\213\205\346\225"
                        "\260\346\215\256\350\257\257\345\267\256\347\233\270\345\205\263\350\264\243\344\273\273\343\200\202\350\213\245\345\255\230\345\234\250\345\277\203\347\220\206\345\233\260\346\211\260\346\210\226\345\201\245\345\272\267\351\227\256\351\242\230\357\274\214\350\257\267\345\217\212\346\227\266\345\222\250\350\257\242\344\270\223\344\270\232\345\214\273\345\270\210\346\210\226\345\277\203\347\220\206\345\267\245\344\275\234\350\200\205\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'ui-sans-serif','system-ui','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-size:10pt; color:#1f2329; background-color:#ffffff;\">\350\241\200\347\232\204\346\225\231\350\256\255\357\274\232</span><span style=\" font-family:'ui-sans-serif','system-ui','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-size:10pt; font-weight:"
                        "700; color:#1f2329; background-color:#ffffff;\">\345\210\207\345\213\277\344\273\205\345\207\255\346\234\254\347\273\223\346\236\234\350\207\252\350\241\214\345\210\244\346\226\255\346\210\226\351\207\207\345\217\226\345\271\262\351\242\204\346\216\252\346\226\275\343\200\202</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
