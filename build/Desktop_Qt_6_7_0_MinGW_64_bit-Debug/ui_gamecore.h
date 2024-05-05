/********************************************************************************
** Form generated from reading UI file 'gamecore.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMECORE_H
#define UI_GAMECORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_gamecore
{
public:

    void setupUi(QDialog *gamecore)
    {
        if (gamecore->objectName().isEmpty())
            gamecore->setObjectName("gamecore");
        gamecore->resize(789, 600);

        retranslateUi(gamecore);

        QMetaObject::connectSlotsByName(gamecore);
    } // setupUi

    void retranslateUi(QDialog *gamecore)
    {
        gamecore->setWindowTitle(QCoreApplication::translate("gamecore", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gamecore: public Ui_gamecore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMECORE_H
