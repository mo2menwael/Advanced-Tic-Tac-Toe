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
    QLabel *FirstName;
    QLineEdit *FirstBox;
    QLineEdit *SecondBox;
    QLabel *SecondName;
    QPushButton *start_button;

    void setupUi(QDialog *mode_selector)
    {
        if (mode_selector->objectName().isEmpty())
            mode_selector->setObjectName("mode_selector");
        mode_selector->resize(789, 600);
        PVP = new QPushButton(mode_selector);
        PVP->setObjectName("PVP");
        PVP->setGeometry(QRect(280, 190, 211, 41));
        PVAI = new QPushButton(mode_selector);
        PVAI->setObjectName("PVAI");
        PVAI->setGeometry(QRect(280, 260, 211, 41));
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

        FirstName = new QLabel(mode_selector);
        FirstName->setObjectName("FirstName");
        FirstName->setGeometry(QRect(250, 350, 81, 20));
        FirstBox = new QLineEdit(mode_selector);
        FirstBox->setObjectName("FirstBox");
        FirstBox->setGeometry(QRect(360, 350, 171, 26));
        SecondBox = new QLineEdit(mode_selector);
        SecondBox->setObjectName("SecondBox");
        SecondBox->setGeometry(QRect(360, 400, 171, 26));
        SecondName = new QLabel(mode_selector);
        SecondName->setObjectName("SecondName");
        SecondName->setGeometry(QRect(240, 400, 101, 20));
        start_button = new QPushButton(mode_selector);
        start_button->setObjectName("start_button");
        start_button->setGeometry(QRect(310, 460, 151, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibri")});
        font2.setPointSize(13);
        font2.setBold(true);
        start_button->setFont(font2);

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
        FirstName->setText(QCoreApplication::translate("mode_selector", "First Name :", nullptr));
        SecondName->setText(QCoreApplication::translate("mode_selector", "Second Name:", nullptr));
        start_button->setText(QCoreApplication::translate("mode_selector", "START", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mode_selector: public Ui_mode_selector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODE_SELECTOR_H
