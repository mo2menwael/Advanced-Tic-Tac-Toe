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
    QPushButton *main_menu;

    void setupUi(QDialog *mode_selector)
    {
        if (mode_selector->objectName().isEmpty())
            mode_selector->setObjectName("mode_selector");
        mode_selector->resize(789, 600);
        PVP = new QPushButton(mode_selector);
        PVP->setObjectName("PVP");
        PVP->setGeometry(QRect(290, 230, 181, 141));
        PVAI = new QPushButton(mode_selector);
        PVAI->setObjectName("PVAI");
        PVAI->setGeometry(QRect(530, 230, 191, 141));
        layoutWidget = new QWidget(mode_selector);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(240, 60, 290, 86));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Calibri")});
        font1.setPointSize(12);
        font1.setBold(false);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        SecondBox = new QLineEdit(mode_selector);
        SecondBox->setObjectName("SecondBox");
        SecondBox->setGeometry(QRect(380, 400, 91, 26));
        SecondName = new QLabel(mode_selector);
        SecondName->setObjectName("SecondName");
        SecondName->setGeometry(QRect(280, 400, 101, 20));
        start_button = new QPushButton(mode_selector);
        start_button->setObjectName("start_button");
        start_button->setGeometry(QRect(310, 470, 151, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibri")});
        font2.setPointSize(13);
        font2.setBold(true);
        start_button->setFont(font2);
        history = new QPushButton(mode_selector);
        history->setObjectName("history");
        history->setGeometry(QRect(40, 230, 181, 141));
        main_menu = new QPushButton(mode_selector);
        main_menu->setObjectName("main_menu");
        main_menu->setGeometry(QRect(310, 530, 151, 41));

        retranslateUi(mode_selector);

        QMetaObject::connectSlotsByName(mode_selector);
    } // setupUi

    void retranslateUi(QDialog *mode_selector)
    {
        mode_selector->setWindowTitle(QCoreApplication::translate("mode_selector", "Mode Selector", nullptr));
        PVP->setText(QCoreApplication::translate("mode_selector", "Player Vs Player", nullptr));
        PVAI->setText(QCoreApplication::translate("mode_selector", "Player Vs AI", nullptr));
        label->setText(QCoreApplication::translate("mode_selector", "Tic Tac Toe", nullptr));
        label_4->setText(QCoreApplication::translate("mode_selector", "Choose mode", nullptr));
        SecondName->setText(QCoreApplication::translate("mode_selector", "Second Player", nullptr));
        start_button->setText(QCoreApplication::translate("mode_selector", "START", nullptr));
        history->setText(QCoreApplication::translate("mode_selector", "history", nullptr));
        main_menu->setText(QCoreApplication::translate("mode_selector", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mode_selector: public Ui_mode_selector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODE_SELECTOR_H
