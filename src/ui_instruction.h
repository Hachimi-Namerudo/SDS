/********************************************************************************
** Form generated from reading UI file 'instruction.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCTION_H
#define UI_INSTRUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Instruction
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QDialog *Instruction)
    {
        if (Instruction->objectName().isEmpty())
            Instruction->setObjectName("Instruction");
        Instruction->resize(800, 600);
        textBrowser = new QTextBrowser(Instruction);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 0, 781, 551));
        pushButton = new QPushButton(Instruction);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 560, 101, 31));

        retranslateUi(Instruction);

        QMetaObject::connectSlotsByName(Instruction);
    } // setupUi

    void retranslateUi(QDialog *Instruction)
    {
        Instruction->setWindowTitle(QCoreApplication::translate("Instruction", "Dialog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Instruction", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica Neue','Helvetica','Arial','PingFang SC','Hiragino Sans GB','Microsoft YaHei','WenQuanYi Micro Hei','sans-serif'; font-size:16pt; color:#333333; background-color:#ffffff;\">\346\212\221\351\203\201\350\207\252\350\257\204\351\207\217\350\241\250\357\274\210Self-rating depression scale\357\274\214SDS\357\274\211\357\274\214\346\230\257\345\220\253\346\234\211"
                        "20\344\270\252\351\241\271\347\233\256\357\274\214\345\210\206\344\270\2724\347\272\247\350\257\204\345\210\206\347\232\204\350\207\252\350\257\204\351\207\217\350\241\250\357\274\214\345\216\237\345\236\213\346\230\257W.K.Zung\347\274\226\345\210\266\347\232\204\346\212\221\351\203\201\351\207\217\350\241\250\357\274\2101965\357\274\211\343\200\202\345\205\266\347\211\271\347\202\271\346\230\257\344\275\277\347\224\250\347\256\200\344\276\277\357\274\214\345\271\266\350\203\275\347\233\270\345\275\223\347\233\264\350\247\202\345\234\260\345\217\215\346\230\240\346\212\221\351\203\201\346\202\243\350\200\205\347\232\204\344\270\273\350\247\202\346\204\237\345\217\227\345\217\212\345\205\266\345\234\250\346\262\273\347\226\227\344\270\255\347\232\204\345\217\230\345\214\226\343\200\202\344\270\273\350\246\201\351\200\202\347\224\250\344\272\216\345\205\267\346\234\211\346\212\221\351\203\201\347\227\207\347\212\266\347\232\204\346\210\220\345\271\264\344\272\272\357\274\214\345\214\205\346\213\254\351\227\250\350"
                        "\257\212\345\217\212\344\275\217\351\231\242\346\202\243\350\200\205\343\200\202</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Instruction", "\344\272\206\350\247\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Instruction: public Ui_Instruction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTION_H
