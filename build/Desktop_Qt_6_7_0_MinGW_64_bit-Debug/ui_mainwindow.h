/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *username;
    QLineEdit *Password;
    QPushButton *SignUp_Button;
    QPushButton *SignIn_Button;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(789, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 222, 141, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        font.setPointSize(11);
        font.setBold(false);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(220, 264, 81, 20));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        username = new QLineEdit(centralwidget);
        username->setObjectName("username");
        username->setGeometry(QRect(340, 220, 231, 26));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Calibri")});
        font1.setPointSize(11);
        username->setFont(font1);
        username->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Password = new QLineEdit(centralwidget);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(340, 260, 231, 26));
        Password->setFont(font1);
        Password->setEchoMode(QLineEdit::Password);
        Password->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        SignUp_Button = new QPushButton(centralwidget);
        SignUp_Button->setObjectName("SignUp_Button");
        SignUp_Button->setGeometry(QRect(420, 320, 93, 29));
        SignIn_Button = new QPushButton(centralwidget);
        SignIn_Button->setObjectName("SignIn_Button");
        SignIn_Button->setGeometry(QRect(260, 320, 93, 29));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(250, 110, 290, 86));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibri")});
        font2.setPointSize(26);
        font2.setBold(true);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Calibri")});
        font3.setPointSize(12);
        font3.setBold(false);
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(250, 440, 291, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(270, 390, 221, 20));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 789, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Tic Tac Toe", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Username :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password :", nullptr));
        SignUp_Button->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        SignIn_Button->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Tic Tac Toe", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Please enter your login credentials", nullptr));
        label_6->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
