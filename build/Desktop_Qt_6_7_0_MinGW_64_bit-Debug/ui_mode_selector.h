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

    void setupUi(QDialog *mode_selector)
    {
        if (mode_selector->objectName().isEmpty())
            mode_selector->setObjectName("mode_selector");
        mode_selector->resize(791, 600);
        mode_selector->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 47, 65);"));
        PVP = new QPushButton(mode_selector);
        PVP->setObjectName("PVP");
        PVP->setGeometry(QRect(50, 210, 191, 141));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        PVP->setFont(font);
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
        PVAI = new QPushButton(mode_selector);
        PVAI->setObjectName("PVAI");
        PVAI->setGeometry(QRect(300, 210, 191, 141));
        PVAI->setFont(font);
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
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(26);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(12);
        font2.setBold(false);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        SecondBox = new QLineEdit(mode_selector);
        SecondBox->setObjectName("SecondBox");
        SecondBox->setGeometry(QRect(400, 408, 111, 26));
        QFont font3;
        font3.setPointSize(11);
        SecondBox->setFont(font3);
        SecondBox->setStyleSheet(QString::fromUtf8("color: rgb(97, 184, 211);\n"
"border: 2px solid white;\n"
"border-radius: 5px;"));
        SecondName = new QLabel(mode_selector);
        SecondName->setObjectName("SecondName");
        SecondName->setGeometry(QRect(270, 410, 121, 20));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(false);
        SecondName->setFont(font4);
        SecondName->setStyleSheet(QString::fromUtf8("color: rgb(97, 184, 211);"));
        start_button = new QPushButton(mode_selector);
        start_button->setObjectName("start_button");
        start_button->setGeometry(QRect(310, 470, 161, 41));
        start_button->setFont(font2);
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
        history->setFont(font);
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
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(false);
        sign_out->setFont(font5);
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
#if QT_CONFIG(shortcut)
        SecondName->setBuddy(SecondBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(PVP, PVAI);
        QWidget::setTabOrder(PVAI, history);
        QWidget::setTabOrder(history, start_button);
        QWidget::setTabOrder(start_button, sign_out);
        QWidget::setTabOrder(sign_out, SecondBox);

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
        SecondName->setText(QCoreApplication::translate("mode_selector", "Second Player :", nullptr));
        start_button->setText(QCoreApplication::translate("mode_selector", "Start", nullptr));
        history->setText(QCoreApplication::translate("mode_selector", "History", nullptr));
        sign_out->setText(QCoreApplication::translate("mode_selector", "Sign Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mode_selector: public Ui_mode_selector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODE_SELECTOR_H
