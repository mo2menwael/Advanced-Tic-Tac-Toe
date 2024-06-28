/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLabel *Username;
    QLabel *Password;
    QLineEdit *lineEdit_4;
    QLabel *confirmpass;
    QPushButton *Register;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *match;
    QLabel *label_2;
    QLabel *passimg;
    QLabel *passimg_2;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->resize(789, 600);
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        font.setPointSize(10);
        SignUp->setFont(font);
        SignUp->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 47, 65);"));
        lineEdit = new QLineEdit(SignUp);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(360, 238, 191, 29));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Calibri")});
        font1.setPointSize(11);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(97, 184, 211);\n"
"border: 2px solid rgb(225, 225, 225);\n"
"border-radius: 5px;"));
        lineEdit_3 = new QLineEdit(SignUp);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(360, 297, 191, 30));
        lineEdit_3->setFont(font1);
        lineEdit_3->setStyleSheet(QString::fromUtf8("color: rgb(97, 184, 211);\n"
"border: 2px solid rgb(225, 225, 225);\n"
"border-radius: 5px;"));
        lineEdit_3->setEchoMode(QLineEdit::Password);
        Username = new QLabel(SignUp);
        Username->setObjectName("Username");
        Username->setEnabled(true);
        Username->setGeometry(QRect(220, 240, 101, 22));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Username->sizePolicy().hasHeightForWidth());
        Username->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(11);
        font2.setBold(true);
        Username->setFont(font2);
        Username->setStyleSheet(QString::fromUtf8("color: rgb(97, 184, 211);"));
        Password = new QLabel(SignUp);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(220, 300, 91, 22));
        Password->setFont(font2);
        Password->setStyleSheet(QString::fromUtf8("color: rgb(97, 184, 211);"));
        lineEdit_4 = new QLineEdit(SignUp);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(360, 357, 191, 30));
        lineEdit_4->setFont(font1);
        lineEdit_4->setStyleSheet(QString::fromUtf8("color: rgb(97, 184, 211);\n"
"border: 2px solid rgb(225, 225, 225);\n"
"border-radius: 5px;"));
        lineEdit_4->setEchoMode(QLineEdit::Password);
        confirmpass = new QLabel(SignUp);
        confirmpass->setObjectName("confirmpass");
        confirmpass->setGeometry(QRect(180, 360, 171, 22));
        confirmpass->setFont(font2);
        confirmpass->setStyleSheet(QString::fromUtf8("color: rgb(97, 184, 211);"));
        Register = new QPushButton(SignUp);
        Register->setObjectName("Register");
        Register->setGeometry(QRect(340, 450, 111, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(10);
        font3.setBold(false);
        Register->setFont(font3);
        Register->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        layoutWidget = new QWidget(SignUp);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(150, 80, 491, 93));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI")});
        font4.setPointSize(26);
        font4.setBold(true);
        font4.setKerning(false);
        label_6->setFont(font4);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);"));
        label_6->setTextFormat(Qt::AutoText);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe UI")});
        font5.setPointSize(12);
        label_7->setFont(font5);
        label_7->setLayoutDirection(Qt::LeftToRight);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_7);

        match = new QLabel(SignUp);
        match->setObjectName("match");
        match->setGeometry(QRect(260, 410, 281, 20));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Segoe UI")});
        font6.setPointSize(10);
        font6.setBold(true);
        match->setFont(font6);
        match->setStyleSheet(QString::fromUtf8("color: rgb(97, 184, 211);"));
        match->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(SignUp);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(520, 239, 31, 28));
        label_2->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"image: url(:/img/Images/users.png);"));
        passimg = new QLabel(SignUp);
        passimg->setObjectName("passimg");
        passimg->setGeometry(QRect(525, 302, 21, 20));
        passimg->setStyleSheet(QString::fromUtf8("image: url(:/img/Images/pass.png);\n"
"background: transparent;"));
        passimg_2 = new QLabel(SignUp);
        passimg_2->setObjectName("passimg_2");
        passimg_2->setGeometry(QRect(525, 362, 21, 20));
        passimg_2->setStyleSheet(QString::fromUtf8("image: url(:/img/Images/pass.png);\n"
"background: transparent;"));

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Dialog", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("SignUp", "Username", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("SignUp", "Password", nullptr));
        Username->setText(QCoreApplication::translate("SignUp", "Username :", nullptr));
        Password->setText(QCoreApplication::translate("SignUp", "Password :", nullptr));
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("SignUp", "Confrim Password", nullptr));
        confirmpass->setText(QCoreApplication::translate("SignUp", "Confirm Password :", nullptr));
        Register->setText(QCoreApplication::translate("SignUp", "Register", nullptr));
        label_6->setText(QCoreApplication::translate("SignUp", "Welcome to Tic Tac Toe", nullptr));
        label_7->setText(QCoreApplication::translate("SignUp", "Please Enter Your Info", nullptr));
        match->setText(QString());
        label_2->setText(QString());
        passimg->setText(QString());
        passimg_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
