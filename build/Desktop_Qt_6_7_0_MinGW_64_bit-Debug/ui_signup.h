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

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->resize(789, 600);
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        font.setPointSize(10);
        SignUp->setFont(font);
        lineEdit = new QLineEdit(SignUp);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(360, 240, 191, 29));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Calibri")});
        font1.setPointSize(12);
        lineEdit->setFont(font1);
        lineEdit_3 = new QLineEdit(SignUp);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(360, 300, 191, 30));
        lineEdit_3->setFont(font1);
        lineEdit_3->setEchoMode(QLineEdit::Password);
        Username = new QLabel(SignUp);
        Username->setObjectName("Username");
        Username->setEnabled(true);
        Username->setGeometry(QRect(230, 240, 84, 22));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Username->sizePolicy().hasHeightForWidth());
        Username->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibri")});
        font2.setPointSize(11);
        Username->setFont(font2);
        Password = new QLabel(SignUp);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(230, 300, 79, 22));
        Password->setFont(font2);
        lineEdit_4 = new QLineEdit(SignUp);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(360, 350, 191, 30));
        lineEdit_4->setFont(font1);
        lineEdit_4->setEchoMode(QLineEdit::Password);
        confirmpass = new QLabel(SignUp);
        confirmpass->setObjectName("confirmpass");
        confirmpass->setGeometry(QRect(200, 351, 142, 22));
        confirmpass->setFont(font2);
        Register = new QPushButton(SignUp);
        Register->setObjectName("Register");
        Register->setGeometry(QRect(330, 450, 90, 29));
        Register->setFont(font2);
        layoutWidget = new QWidget(SignUp);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(180, 80, 417, 86));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Calibri")});
        font3.setPointSize(26);
        font3.setBold(true);
        label_6->setFont(font3);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);
        label_7->setLayoutDirection(Qt::LeftToRight);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_7);

        match = new QLabel(SignUp);
        match->setObjectName("match");
        match->setGeometry(QRect(240, 410, 281, 20));

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Dialog", nullptr));
        Username->setText(QCoreApplication::translate("SignUp", "Username :", nullptr));
        Password->setText(QCoreApplication::translate("SignUp", "Password :", nullptr));
        confirmpass->setText(QCoreApplication::translate("SignUp", "Confirm Password :", nullptr));
        Register->setText(QCoreApplication::translate("SignUp", "Register", nullptr));
        label_6->setText(QCoreApplication::translate("SignUp", "Welcome to Tic Tac Toe", nullptr));
        label_7->setText(QCoreApplication::translate("SignUp", "Please Enter Your Info", nullptr));
        match->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
