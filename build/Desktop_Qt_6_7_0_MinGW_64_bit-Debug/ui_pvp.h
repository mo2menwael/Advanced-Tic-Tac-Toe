/********************************************************************************
** Form generated from reading UI file 'pvp.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PVP_H
#define UI_PVP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pvp
{
public:
    QFrame *frame1;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QFrame *line_9;
    QPushButton *eight;
    QFrame *line_3;
    QPushButton *six;
    QPushButton *nine;
    QPushButton *three;
    QPushButton *one;
    QFrame *line_5;
    QPushButton *two;
    QFrame *line_4;
    QFrame *line_8;
    QFrame *line_6;
    QPushButton *seven;
    QPushButton *four;
    QPushButton *five;
    QFrame *line_7;
    QFrame *line_10;
    QFrame *line_2;
    QFrame *line_11;
    QFrame *line_12;
    QFrame *line;
    QPushButton *startt;
    QLabel *p1;
    QLabel *p2;
    QLabel *label_3;
    QPushButton *main_menu;
    QLabel *turntext;

    void setupUi(QDialog *pvp)
    {
        if (pvp->objectName().isEmpty())
            pvp->setObjectName("pvp");
        pvp->resize(834, 585);
        frame1 = new QFrame(pvp);
        frame1->setObjectName("frame1");
        frame1->setGeometry(QRect(250, 10, 571, 541));
        frame1->setFrameShape(QFrame::StyledPanel);
        frame1->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame1);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 551, 521));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        line_9 = new QFrame(layoutWidget);
        line_9->setObjectName("line_9");
        QFont font;
        font.setBold(true);
        line_9->setFont(font);
        line_9->setFrameShape(QFrame::Shape::HLine);
        line_9->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_9, 1, 2, 1, 1);

        eight = new QPushButton(layoutWidget);
        eight->setObjectName("eight");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(eight->sizePolicy().hasHeightForWidth());
        eight->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(30);
        eight->setFont(font1);

        gridLayout->addWidget(eight, 4, 2, 1, 1);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_3, 2, 3, 1, 1);

        six = new QPushButton(layoutWidget);
        six->setObjectName("six");
        sizePolicy.setHeightForWidth(six->sizePolicy().hasHeightForWidth());
        six->setSizePolicy(sizePolicy);
        six->setFont(font1);

        gridLayout->addWidget(six, 2, 4, 1, 1);

        nine = new QPushButton(layoutWidget);
        nine->setObjectName("nine");
        sizePolicy.setHeightForWidth(nine->sizePolicy().hasHeightForWidth());
        nine->setSizePolicy(sizePolicy);
        nine->setFont(font1);

        gridLayout->addWidget(nine, 4, 4, 1, 1);

        three = new QPushButton(layoutWidget);
        three->setObjectName("three");
        sizePolicy.setHeightForWidth(three->sizePolicy().hasHeightForWidth());
        three->setSizePolicy(sizePolicy);
        three->setFont(font1);

        gridLayout->addWidget(three, 0, 4, 1, 1);

        one = new QPushButton(layoutWidget);
        one->setObjectName("one");
        sizePolicy.setHeightForWidth(one->sizePolicy().hasHeightForWidth());
        one->setSizePolicy(sizePolicy);
        one->setFont(font1);

        gridLayout->addWidget(one, 0, 0, 1, 1);

        line_5 = new QFrame(layoutWidget);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::Shape::VLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_5, 0, 3, 1, 1);

        two = new QPushButton(layoutWidget);
        two->setObjectName("two");
        sizePolicy.setHeightForWidth(two->sizePolicy().hasHeightForWidth());
        two->setSizePolicy(sizePolicy);
        two->setFont(font1);

        gridLayout->addWidget(two, 0, 2, 1, 1);

        line_4 = new QFrame(layoutWidget);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_4, 4, 3, 1, 1);

        line_8 = new QFrame(layoutWidget);
        line_8->setObjectName("line_8");
        line_8->setFrameShape(QFrame::Shape::VLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_8, 0, 1, 1, 1);

        line_6 = new QFrame(layoutWidget);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::Shape::VLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_6, 4, 1, 1, 1);

        seven = new QPushButton(layoutWidget);
        seven->setObjectName("seven");
        sizePolicy.setHeightForWidth(seven->sizePolicy().hasHeightForWidth());
        seven->setSizePolicy(sizePolicy);
        seven->setFont(font1);

        gridLayout->addWidget(seven, 4, 0, 1, 1);

        four = new QPushButton(layoutWidget);
        four->setObjectName("four");
        sizePolicy.setHeightForWidth(four->sizePolicy().hasHeightForWidth());
        four->setSizePolicy(sizePolicy);
        four->setFont(font1);

        gridLayout->addWidget(four, 2, 0, 1, 1);

        five = new QPushButton(layoutWidget);
        five->setObjectName("five");
        sizePolicy.setHeightForWidth(five->sizePolicy().hasHeightForWidth());
        five->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(30);
        font2.setBold(false);
        five->setFont(font2);

        gridLayout->addWidget(five, 2, 2, 1, 1);

        line_7 = new QFrame(layoutWidget);
        line_7->setObjectName("line_7");
        line_7->setFrameShape(QFrame::Shape::VLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_7, 2, 1, 1, 1);

        line_10 = new QFrame(layoutWidget);
        line_10->setObjectName("line_10");
        line_10->setFont(font);
        line_10->setFrameShape(QFrame::Shape::HLine);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_10, 1, 4, 1, 1);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_2, 3, 0, 1, 1);

        line_11 = new QFrame(layoutWidget);
        line_11->setObjectName("line_11");
        line_11->setFrameShape(QFrame::Shape::HLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_11, 3, 2, 1, 1);

        line_12 = new QFrame(layoutWidget);
        line_12->setObjectName("line_12");
        line_12->setFrameShape(QFrame::Shape::HLine);
        line_12->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_12, 3, 4, 1, 1);

        line = new QFrame(layoutWidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 1);

        startt = new QPushButton(pvp);
        startt->setObjectName("startt");
        startt->setGeometry(QRect(70, 440, 101, 29));
        QFont font3;
        font3.setBold(false);
        startt->setFont(font3);
        p1 = new QLabel(pvp);
        p1->setObjectName("p1");
        p1->setGeometry(QRect(70, 80, 111, 31));
        p1->setScaledContents(true);
        p1->setAlignment(Qt::AlignCenter);
        p2 = new QLabel(pvp);
        p2->setObjectName("p2");
        p2->setGeometry(QRect(70, 130, 111, 31));
        p2->setScaledContents(true);
        p2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(pvp);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 110, 63, 20));
        label_3->setAlignment(Qt::AlignCenter);
        main_menu = new QPushButton(pvp);
        main_menu->setObjectName("main_menu");
        main_menu->setGeometry(QRect(50, 490, 151, 29));
        turntext = new QLabel(pvp);
        turntext->setObjectName("turntext");
        turntext->setGeometry(QRect(30, 300, 191, 20));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        turntext->setFont(font4);
        turntext->setAlignment(Qt::AlignCenter);

        retranslateUi(pvp);

        QMetaObject::connectSlotsByName(pvp);
    } // setupUi

    void retranslateUi(QDialog *pvp)
    {
        pvp->setWindowTitle(QCoreApplication::translate("pvp", "Player VS Player", nullptr));
        eight->setText(QString());
        six->setText(QString());
        nine->setText(QString());
        three->setText(QString());
        one->setText(QString());
        two->setText(QString());
        seven->setText(QString());
        four->setText(QString());
        five->setText(QString());
        startt->setText(QCoreApplication::translate("pvp", "Start Game", nullptr));
        p1->setText(QCoreApplication::translate("pvp", "TextLabel", nullptr));
        p2->setText(QCoreApplication::translate("pvp", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("pvp", "VS", nullptr));
        main_menu->setText(QCoreApplication::translate("pvp", "Exit to Main Menu", nullptr));
        turntext->setText(QCoreApplication::translate("pvp", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pvp: public Ui_pvp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PVP_H
