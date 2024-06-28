/********************************************************************************
** Form generated from reading UI file 'mode_selector.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODE_SELECTOR_H
#define UI_MODE_SELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mode_selector
{
public:
    QPushButton *PVP;
    QPushButton *PVAI;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *SecondBox;
    QLabel *SecondName;
    QPushButton *start_button;
    QPushButton *history;
    QPushButton *sign_out;
    QLabel *pvpimg;
    QLabel *hisimg;
    QLabel *aiimg;

    void setupUi(QDialog *mode_selector)
    {
        if (mode_selector->objectName().isEmpty())
            mode_selector->setObjectName("mode_selector");
        mode_selector->resize(791, 600);
        QFont font;
        font.setBold(false);
        mode_selector->setFont(font);
        mode_selector->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 47, 65);"));
        PVP = new QPushButton(mode_selector);
        PVP->setObjectName("PVP");
        PVP->setGeometry(QRect(50, 210, 191, 141));
        QFont font1;
        font1.setPointSize(13);
        font1.setWeight(QFont::Black);
        font1.setItalic(true);
        PVP->setFont(font1);
        PVP->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(253, 66, 83);\n"
"border: 5px solid rgb(0, 35, 48);\n"
"border-radius: 6px;\n"
"}\n"
"QPushButton:Hover{\n"
"background-color: rgb(0, 50, 68);\n"
"border-color: rgb(0, 35, 48);\n"
"}\n"
"QPushButton:Pressed{\n"
"border-color: rgb(253, 66, 83);\n"
"background-color: rgb(253, 66, 83);\n"
"color: rgb(0, 47, 65);\n"
"}"));
        PVP->setFlat(false);
        PVAI = new QPushButton(mode_selector);
        PVAI->setObjectName("PVAI");
        PVAI->setGeometry(QRect(300, 210, 191, 141));
        QFont font2;
        font2.setPointSize(13);
        font2.setWeight(QFont::Black);
        font2.setItalic(true);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        PVAI->setFont(font2);
        PVAI->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(253, 66, 83);\n"
"border: 5px solid rgb(0, 35, 48);\n"
"border-radius: 6px;\n"
"}\n"
"QPushButton:Hover{\n"
"background-color: rgb(0, 50, 68);\n"
"border-color: rgb(0, 35, 48);\n"
"}\n"
"QPushButton:Pressed{\n"
"border-color: rgb(253, 66, 83);\n"
"background-color: rgb(253, 66, 83);\n"
"color: rgb(0, 47, 65);\n"
"}"));
        layoutWidget = new QWidget(mode_selector);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(250, 60, 290, 93));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(26);
        font3.setWeight(QFont::Black);
        font3.setItalic(false);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI")});
        font4.setPointSize(12);
        font4.setBold(false);
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        SecondBox = new QLineEdit(mode_selector);
        SecondBox->setObjectName("SecondBox");
        SecondBox->setGeometry(QRect(400, 407, 121, 26));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(false);
        SecondBox->setFont(font5);
        SecondBox->setStyleSheet(QString::fromUtf8("color: rgb(97, 184, 211);\n"
"border: 2px solid white;\n"
"border-radius: 5px;\n"
"background: transparent;"));
        SecondName = new QLabel(mode_selector);
        SecondName->setObjectName("SecondName");
        SecondName->setGeometry(QRect(270, 410, 121, 20));
        QFont font6;
        font6.setPointSize(11);
        font6.setBold(false);
        font6.setItalic(false);
        SecondName->setFont(font6);
        SecondName->setStyleSheet(QString::fromUtf8("color: rgb(97, 184, 211);"));
        start_button = new QPushButton(mode_selector);
        start_button->setObjectName("start_button");
        start_button->setGeometry(QRect(310, 470, 161, 41));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Segoe UI")});
        font7.setPointSize(12);
        font7.setWeight(QFont::Medium);
        font7.setItalic(false);
        start_button->setFont(font7);
        start_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(93, 184, 211);\n"
"background-color: rgb(0, 33, 45);\n"
"border: 3px solid;\n"
"border-radius: 5px;\n"
"border-color: rgb(0, 33, 45);\n"
"}\n"
"QPushButton:Hover{\n"
"border-color: rgb(0, 35, 48);\n"
"background-color: rgb(0, 35, 48);\n"
"}\n"
"QPushButton:Pressed:{\n"
"color: rgb(0, 33, 45);\n"
"background-color: rgb(93, 184, 211);\n"
"border-color: rgb(93, 184, 211);\n"
"}"));
        history = new QPushButton(mode_selector);
        history->setObjectName("history");
        history->setGeometry(QRect(550, 210, 191, 141));
        history->setFont(font1);
        history->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(253, 66, 83);\n"
"border: 5px solid rgb(0, 35, 48);\n"
"border-radius: 6px;\n"
"}\n"
"QPushButton:Hover{\n"
"background-color: rgb(0, 50, 68);\n"
"border-color: rgb(0, 35, 48);\n"
"}\n"
"QPushButton:Pressed{\n"
"border-color: rgb(253, 66, 83);\n"
"background-color: rgb(253, 66, 83);\n"
"color: rgb(0, 47, 65);\n"
"}"));
        sign_out = new QPushButton(mode_selector);
        sign_out->setObjectName("sign_out");
        sign_out->setGeometry(QRect(310, 530, 161, 41));
        QFont font8;
        font8.setPointSize(12);
        font8.setWeight(QFont::Medium);
        sign_out->setFont(font8);
        sign_out->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(93, 184, 211);\n"
"background-color: rgb(0, 33, 45);\n"
"border: 3px solid;\n"
"border-radius: 5px;\n"
"border-color: rgb(0, 33, 45);\n"
"}\n"
"QPushButton:Hover{\n"
"border-color: rgb(0, 35, 48);\n"
"background-color: rgb(0, 35, 48);\n"
"}\n"
"QPushButton:Pressed{\n"
"background-color: rgb(93, 184, 211);\n"
"color:rgb(0, 33, 45);\n"
"border-color: rgb(93, 184, 211);\n"
"}"));
        pvpimg = new QLabel(mode_selector);
        pvpimg->setObjectName("pvpimg");
        pvpimg->setGeometry(QRect(115, 300, 61, 51));
        pvpimg->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"image: url(:/img/Images/people 2.png);"));
        hisimg = new QLabel(mode_selector);
        hisimg->setObjectName("hisimg");
        hisimg->setGeometry(QRect(628, 300, 38, 38));
        hisimg->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"image: url(:/img/Images/history-book.png);"));
        aiimg = new QLabel(mode_selector);
        aiimg->setObjectName("aiimg");
        aiimg->setGeometry(QRect(375, 298, 51, 45));
        aiimg->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"image: url(:/img/Images/com.png);"));
        PVP->raise();
        PVAI->raise();
        layoutWidget->raise();
        SecondBox->raise();
        SecondName->raise();
        start_button->raise();
        history->raise();
        sign_out->raise();
        hisimg->raise();
        aiimg->raise();
        pvpimg->raise();
#if QT_CONFIG(shortcut)
        SecondName->setBuddy(SecondBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(PVP, PVAI);
        QWidget::setTabOrder(PVAI, history);
        QWidget::setTabOrder(history, SecondBox);
        QWidget::setTabOrder(SecondBox, start_button);
        QWidget::setTabOrder(start_button, sign_out);

        retranslateUi(mode_selector);

        QMetaObject::connectSlotsByName(mode_selector);
    } // setupUi

    void retranslateUi(QDialog *mode_selector)
    {
        mode_selector->setWindowTitle(QCoreApplication::translate("mode_selector", "Mode Selector", nullptr));
        PVP->setText(QCoreApplication::translate("mode_selector", "Player Vs Player", nullptr));
        PVAI->setText(QCoreApplication::translate("mode_selector", "Player Vs AI", nullptr));
        label->setText(QCoreApplication::translate("mode_selector", "Tic Tac Toe", nullptr));
        label_4->setText(QCoreApplication::translate("mode_selector", "Choose Mode", nullptr));
        SecondBox->setText(QString());
        SecondBox->setPlaceholderText(QCoreApplication::translate("mode_selector", "Enter Name", nullptr));
        SecondName->setText(QCoreApplication::translate("mode_selector", "Second Player :", nullptr));
        start_button->setText(QCoreApplication::translate("mode_selector", "Start", nullptr));
        history->setText(QCoreApplication::translate("mode_selector", "History", nullptr));
        sign_out->setText(QCoreApplication::translate("mode_selector", "Sign Out", nullptr));
        pvpimg->setText(QString());
        hisimg->setText(QString());
        aiimg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mode_selector: public Ui_mode_selector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODE_SELECTOR_H
