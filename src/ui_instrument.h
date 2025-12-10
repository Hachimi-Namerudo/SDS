/********************************************************************************
** Form generated from reading UI file 'instrument.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUMENT_H
#define UI_INSTRUMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Instrument
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Return;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Instrument)
    {
        if (Instrument->objectName().isEmpty())
            Instrument->setObjectName("Instrument");
        Instrument->resize(800, 600);
        Instrument->setMinimumSize(QSize(800, 600));
        horizontalLayoutWidget = new QWidget(Instrument);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(230, 540, 311, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Return = new QPushButton(horizontalLayoutWidget);
        Return->setObjectName("Return");

        horizontalLayout->addWidget(Return);

        textBrowser = new QTextBrowser(Instrument);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(20, 10, 771, 521));

        retranslateUi(Instrument);

        QMetaObject::connectSlotsByName(Instrument);
    } // setupUi

    void retranslateUi(QDialog *Instrument)
    {
        Instrument->setWindowTitle(QCoreApplication::translate("Instrument", "Dialog", nullptr));
        Return->setText(QCoreApplication::translate("Instrument", "\350\277\224\345\233\236(Return)", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Instrument", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px; background-color:#ffffff;\"><span style=\" font-family:'Inter','-apple-system','BlinkMacSystemFont','Segoe UI','PingFang SC','Hiragino Sans GB','Microsoft YaHei','Helvetica Neue','Helvetica','Arial','sans-serif'; font-size:16px; color:#000000; background-color:#ffffff;\">\346\254\242\350\277\216\344\275\277\347\224\250 SDS \350\207\252\350\257\204\345\260\217\347\250\213\345\272"
                        "\217\357\274\210\344\273\245\344\270\213\347\256\200\347\247\260 \342\200\234\346\234\254\347\250\213\345\272\217\342\200\235\357\274\211\343\200\202\344\270\272\344\277\235\351\232\234\346\202\250\347\232\204\346\235\203\347\233\212\357\274\214\350\257\267\345\234\250\344\275\277\347\224\250\346\234\254\347\250\213\345\272\217\350\277\233\350\241\214\350\207\252\346\210\221\346\265\213\350\257\204\345\211\215\357\274\214\344\273\224\347\273\206\351\230\205\350\257\273\345\271\266\345\220\214\346\204\217\344\273\245\344\270\213\346\235\241\346\254\276\357\274\232</span></p>\n"
"<h2 style=\" margin-top:14px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:27px; background-color:#ffffff;\"><span style=\" font-family:'Inter','-apple-system','BlinkMacSystemFont','Segoe UI','PingFang SC','Hiragino Sans GB','Microsoft YaHei','Helvetica Neue','Helvetica','Arial','sans-serif'; font-size:x-large; font-weight:600; color:#000000; background-color:#ffffff;\">\344\270\200"
                        "\343\200\201\346\265\213\350\257\204\350\257\264\346\230\216</span></h2>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\">\n"
"<li style=\" font-family:'Inter','-apple-system','BlinkMacSystemFont','Segoe UI','PingFang SC','Hiragino Sans GB','Microsoft YaHei','Helvetica Neue','Helvetica','Arial','sans-serif'; font-size:16px; color:#000000; background-color:#ffffff;\" style=\" margin-top:8px; margin-bottom:8px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px;\">\346\234\254\347\250\213\345\272\217\346\217\220\344\276\233\347\232\204 SDS \351\207\217\350\241\250\344\273\205\344\270\272\302\240<span style=\" font-weight:700;\">\350\207\252\346\210\221\345\277\203\347\220\206\347\212\266\346\200\201\350\257\204\344\274\260\345\267\245\345\205\267</span>\357\274\214\346\227\250\345\234\250\345\270\256\345\212\251\346\202\250\345\210\235\346\255\245\344\272\206\350\247\243\350\207\252\350\272\253\345\217\257\350\203"
                        "\275\345\255\230\345\234\250\347\232\204\345\277\203\347\220\206\347\227\207\347\212\266\345\200\276\345\220\221\357\274\214<span style=\" font-weight:700;\">\344\270\215\346\236\204\346\210\220\344\270\223\344\270\232\345\277\203\347\220\206\350\257\212\346\226\255\346\210\226\345\214\273\347\226\227\350\257\212\346\226\255</span>\343\200\202</li>\n"
"<li style=\" font-family:'Inter','-apple-system','BlinkMacSystemFont','Segoe UI','PingFang SC','Hiragino Sans GB','Microsoft YaHei','Helvetica Neue','Helvetica','Arial','sans-serif'; font-size:16px; color:#000000; background-color:#ffffff;\" style=\" margin-top:8px; margin-bottom:8px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px;\">\346\265\213\350\257\204\347\273\223\346\236\234\345\237\272\344\272\216\346\202\250\345\241\253\345\206\231\347\232\204\344\277\241\346\201\257\347\224\237\346\210\220\357\274\214\344\273\205\344\276\233\344\270\252\344\272\272\345\217\202\350\200\203\357\274\214\344\270\215\350\203\275\344"
                        "\275\234\344\270\272\344\270\264\345\272\212\350\257\212\346\226\255\343\200\201\346\262\273\347\226\227\343\200\201\347\224\250\350\215\257\347\232\204\344\276\235\346\215\256\357\274\214\344\271\237\344\270\215\350\203\275\346\233\277\344\273\243\344\270\223\344\270\232\345\277\203\347\220\206\345\222\250\350\257\242\345\270\210\343\200\201\347\262\276\347\245\236\347\247\221\345\214\273\347\224\237\347\232\204\344\270\223\344\270\232\346\204\217\350\247\201\343\200\202</li></ul>\n"
"<h2 style=\" margin-top:14px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:27px; background-color:#ffffff;\"><span style=\" font-family:'Inter','-apple-system','BlinkMacSystemFont','Segoe UI','PingFang SC','Hiragino Sans GB','Microsoft YaHei','Helvetica Neue','Helvetica','Arial','sans-serif'; font-size:x-large; font-weight:600; color:#000000; background-color:#ffffff;\">\344\272\214\343\200\201\347\224\250\346\210\267\350\264\243\344\273\273</span></h2>\n"
"<ul style=\"ma"
                        "rgin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\">\n"
"<li style=\" font-family:'Inter','-apple-system','BlinkMacSystemFont','Segoe UI','PingFang SC','Hiragino Sans GB','Microsoft YaHei','Helvetica Neue','Helvetica','Arial','sans-serif'; font-size:16px; color:#000000; background-color:#ffffff;\" style=\" margin-top:8px; margin-bottom:8px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px;\">\346\202\250\346\211\277\350\257\272\344\275\277\347\224\250\346\234\254\347\250\213\345\272\217\344\273\205\344\270\272\302\240<span style=\" font-weight:700;\">\344\270\252\344\272\272\351\235\236\345\225\206\344\270\232\347\224\250\351\200\224</span>\357\274\214\344\270\215\345\260\206\346\265\213\350\257\204\347\273\223\346\236\234\347\224\250\344\272\216\344\273\273\344\275\225\345\225\206\344\270\232\343\200\201\345\214\273\347\226\227\350\257\212\346\226\255\346\210\226\345\205\266\344\273\226\351\235\236\346\263\225\347\224\250\351\200"
                        "\224\343\200\202</li>\n"
"<li style=\" font-family:'Inter','-apple-system','BlinkMacSystemFont','Segoe UI','PingFang SC','Hiragino Sans GB','Microsoft YaHei','Helvetica Neue','Helvetica','Arial','sans-serif'; font-size:16px; color:#000000; background-color:#ffffff;\" style=\" margin-top:8px; margin-bottom:8px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px;\">\350\213\245\346\265\213\350\257\204\347\273\223\346\236\234\346\230\276\347\244\272\345\255\230\345\234\250\346\230\216\346\230\276\345\277\203\347\220\206\345\233\260\346\211\260\357\274\214\346\210\226\346\202\250\346\234\254\350\272\253\346\255\243\347\273\217\345\216\206\346\214\201\347\273\255\347\232\204\346\203\205\347\273\252\351\227\256\351\242\230\343\200\201\345\277\203\347\220\206\345\216\213\345\212\233\347\255\211\357\274\214\345\273\272\350\256\256\345\217\212\346\227\266\350\201\224\347\263\273\344\270\223\344\270\232\345\277\203\347\220\206\345\222\250\350\257\242\346\234\272\346\236\204\343\200\201"
                        "\347\262\276\347\245\236\345\215\253\347\224\237\344\270\255\345\277\203\346\210\226\345\214\273\351\231\242\347\232\204\345\277\203\347\220\206 / \347\262\276\347\245\236\347\247\221\347\247\221\345\256\244\357\274\214\345\257\273\346\261\202\344\270\223\344\270\232\345\270\256\345\212\251\343\200\202</li>\n"
"<li style=\" font-family:'Inter','-apple-system','BlinkMacSystemFont','Segoe UI','PingFang SC','Hiragino Sans GB','Microsoft YaHei','Helvetica Neue','Helvetica','Arial','sans-serif'; font-size:16px; color:#000000; background-color:#ffffff;\" style=\" margin-top:8px; margin-bottom:8px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px;\">\350\257\267\346\202\250\345\246\202\345\256\236\345\241\253\345\206\231\346\265\213\350\257\204\344\277\241\346\201\257\357\274\214\350\231\232\345\201\207\344\277\241\346\201\257\345\217\257\350\203\275\345\257\274\350\207\264\347\273\223\346\236\234\345\201\217\345\267\256\357\274\214\346\234\254\347\250\213\345\272\217\345\257\271"
                        "\346\255\244\344\270\215\346\211\277\346\213\205\350\264\243\344\273\273\343\200\202</li></ul>\n"
"<h2 style=\" margin-top:14px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:27px; background-color:#ffffff;\"><span style=\" font-family:'Inter','-apple-system','BlinkMacSystemFont','Segoe UI','PingFang SC','Hiragino Sans GB','Microsoft YaHei','Helvetica Neue','Helvetica','Arial','sans-serif'; font-size:x-large; font-weight:600; color:#000000; background-color:#ffffff;\">\344\270\211\343\200\201\345\205\215\350\264\243\345\243\260\346\230\216</span></h2>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\">\n"
"<li style=\" font-family:'Inter','-apple-system','BlinkMacSystemFont','Segoe UI','PingFang SC','Hiragino Sans GB','Microsoft YaHei','Helvetica Neue','Helvetica','Arial','sans-serif'; font-size:16px; color:#000000; background-color:#ffffff;\" style=\" margin-top:8px; margin-bottom:8px; margin-"
                        "left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px;\">\346\234\254\347\250\213\345\272\217\344\273\205\346\217\220\344\276\233\351\207\217\350\241\250\346\265\213\350\257\204\345\212\237\350\203\275\357\274\214\345\274\200\345\217\221\350\200\205\344\270\215\345\257\271\346\265\213\350\257\204\347\273\223\346\236\234\347\232\204\345\207\206\347\241\256\346\200\247\343\200\201\345\256\214\346\225\264\346\200\247\343\200\201\351\200\202\347\224\250\346\200\247\344\275\234\344\273\273\344\275\225\346\230\216\347\244\272\346\210\226\346\232\227\347\244\272\347\232\204\344\277\235\350\257\201\343\200\202</li>\n"
"<li style=\" font-family:'Inter','-apple-system','BlinkMacSystemFont','Segoe UI','PingFang SC','Hiragino Sans GB','Microsoft YaHei','Helvetica Neue','Helvetica','Arial','sans-serif'; font-size:16px; color:#000000; background-color:#ffffff;\" style=\" margin-top:8px; margin-bottom:8px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px;\">"
                        "\345\233\240\344\275\277\347\224\250\346\234\254\347\250\213\345\272\217\346\265\213\350\257\204\347\273\223\346\236\234\350\200\214\344\272\247\347\224\237\347\232\204\344\273\273\344\275\225\345\206\263\347\255\226\357\274\210\345\246\202\346\230\257\345\220\246\345\260\261\345\214\273\343\200\201\346\230\257\345\220\246\350\277\233\350\241\214\345\277\203\347\220\206\345\222\250\350\257\242\347\255\211\357\274\211\345\217\212\347\233\270\345\205\263\345\220\216\346\236\234\357\274\214\345\235\207\347\224\261\346\202\250\350\207\252\350\241\214\346\211\277\346\213\205\357\274\214\345\274\200\345\217\221\350\200\205\344\270\215\346\211\277\346\213\205\344\273\273\344\275\225\347\233\264\346\216\245\346\210\226\351\227\264\346\216\245\350\264\243\344\273\273\343\200\202</li>\n"
"<li style=\" font-family:'Inter','-apple-system','BlinkMacSystemFont','Segoe UI','PingFang SC','Hiragino Sans GB','Microsoft YaHei','Helvetica Neue','Helvetica','Arial','sans-serif'; font-size:16px; color:#000000; background-color:#fff"
                        "fff;\" style=\" margin-top:8px; margin-bottom:8px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px;\">\346\234\254\347\250\213\345\272\217\344\273\205\347\224\250\344\272\216\345\277\203\347\220\206\347\212\266\346\200\201\345\210\235\346\255\245\347\255\233\346\237\245\357\274\214\344\270\215\345\205\267\345\244\207\346\262\273\347\226\227\343\200\201\345\271\262\351\242\204\345\212\237\350\203\275\357\274\214\345\274\200\345\217\221\350\200\205\344\270\215\345\257\271\344\273\273\344\275\225\345\233\240\345\277\203\347\220\206\351\227\256\351\242\230\345\274\225\345\217\221\347\232\204\351\243\216\351\231\251\357\274\210\345\246\202\350\207\252\344\274\244\343\200\201\346\203\205\347\273\252\345\244\261\346\216\247\347\255\211\357\274\211\346\211\277\346\213\205\350\264\243\344\273\273\343\200\202</li></ul>\n"
"<h2 style=\" margin-top:14px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:27px; background-color:#ff"
                        "ffff;\"><span style=\" font-family:'Inter','-apple-system','BlinkMacSystemFont','Segoe UI','PingFang SC','Hiragino Sans GB','Microsoft YaHei','Helvetica Neue','Helvetica','Arial','sans-serif'; font-size:x-large; font-weight:600; color:#000000; background-color:#ffffff;\">\345\233\233\343\200\201\345\205\266\344\273\226</span></h2>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\">\n"
"<li style=\" font-family:'Inter','-apple-system','BlinkMacSystemFont','Segoe UI','PingFang SC','Hiragino Sans GB','Microsoft YaHei','Helvetica Neue','Helvetica','Arial','sans-serif'; font-size:16px; color:#000000; background-color:#ffffff;\" style=\" margin-top:8px; margin-bottom:8px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px;\">\346\202\250\347\202\271\345\207\273 \342\200\234\350\277\233\345\205\245\342\200\235 \346\214\211\351\222\256\357\274\214\345\215\263\350\241\250\347\244\272\346\202\250\345\267\262\351\230\205\350"
                        "\257\273\343\200\201\347\220\206\350\247\243\345\271\266\346\216\245\345\217\227\346\234\254\351\241\273\347\237\245\345\205\250\351\203\250\346\235\241\346\254\276\343\200\202</li>\n"
"<li style=\" font-family:'Inter','-apple-system','BlinkMacSystemFont','Segoe UI','PingFang SC','Hiragino Sans GB','Microsoft YaHei','Helvetica Neue','Helvetica','Arial','sans-serif'; font-size:16px; color:#000000; background-color:#ffffff;\" style=\" margin-top:8px; margin-bottom:8px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px;\">\350\213\245\346\202\250\344\270\215\345\220\214\346\204\217\346\234\254\346\235\241\346\254\276\357\274\214\350\257\267\345\213\277\344\275\277\347\224\250\346\234\254\347\250\213\345\272\217\347\232\204\346\265\213\350\257\204\345\212\237\350\203\275\345\271\266\347\253\213\345\215\263\351\200\200\345\207\272\343\200\202</li>\n"
"<li style=\" font-family:'Inter','-apple-system','BlinkMacSystemFont','Segoe UI','PingFang SC','Hiragino Sans GB','Microsoft Ya"
                        "Hei','Helvetica Neue','Helvetica','Arial','sans-serif'; font-size:16px; color:#000000; background-color:#ffffff;\" style=\" margin-top:8px; margin-bottom:8px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px;\">\345\274\200\345\217\221\350\200\205\346\234\211\346\235\203\346\240\271\346\215\256\345\256\236\351\231\205\346\203\205\345\206\265\346\233\264\346\226\260\346\234\254\351\241\273\347\237\245\357\274\214\346\233\264\346\226\260\345\220\216\347\232\204\346\235\241\346\254\276\345\260\206\345\234\250\347\250\213\345\272\217\345\206\205\345\205\254\347\244\272\357\274\214\347\273\247\347\273\255\344\275\277\347\224\250\346\234\254\347\250\213\345\272\217\345\215\263\350\247\206\344\270\272\346\216\245\345\217\227\346\233\264\346\226\260\345\220\216\347\232\204\346\235\241\346\254\276\343\200\202</li></ul>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px; background-color:#ffff"
                        "ff;\"><span style=\" font-family:'Inter','-apple-system','BlinkMacSystemFont','Segoe UI','PingFang SC','Hiragino Sans GB','Microsoft YaHei','Helvetica Neue','Helvetica','Arial','sans-serif'; font-size:16px; color:#000000; background-color:#ffffff;\">\342\200\224\342\200\224 \346\234\254\347\250\213\345\272\217\344\273\205\344\270\272\345\205\254\347\233\212\346\200\247\350\264\250\347\232\204\345\277\203\347\220\206\346\265\213\350\257\204\345\267\245\345\205\267\357\274\214\347\245\235\346\202\250\350\272\253\345\277\203\345\201\245\345\272\267\357\274\201</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px; background-color:#ffffff;\"><span style=\" font-family:'Inter','-apple-system','BlinkMacSystemFont','Segoe UI','PingFang SC','Hiragino Sans GB','Microsoft YaHei','Helvetica Neue','Helvetica','Arial','sans-serif'; font-size:16px; color:#000000; background-color:#ffffff;\"><br />12/09/25</span>"
                        "</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Instrument: public Ui_Instrument {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUMENT_H
