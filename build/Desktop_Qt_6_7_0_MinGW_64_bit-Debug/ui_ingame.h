/********************************************************************************
** Form generated from reading UI file 'ingame.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGAME_H
#define UI_INGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ingame
{
public:

    void setupUi(QDialog *ingame)
    {
        if (ingame->objectName().isEmpty())
            ingame->setObjectName("ingame");
        ingame->resize(789, 600);

        retranslateUi(ingame);

        QMetaObject::connectSlotsByName(ingame);
    } // setupUi

    void retranslateUi(QDialog *ingame)
    {
        ingame->setWindowTitle(QCoreApplication::translate("ingame", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ingame: public Ui_ingame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGAME_H
