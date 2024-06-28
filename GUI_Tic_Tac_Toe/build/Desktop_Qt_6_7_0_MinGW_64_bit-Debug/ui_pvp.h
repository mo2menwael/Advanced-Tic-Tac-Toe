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
#include <QtWidgets/QVBoxLayout>
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
    QPushButton *main_menu;
    QLabel *turntext;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *p1label;
    QLabel *VS;
    QLabel *p2label;

    void setupUi(QDialog *pvp)
    {
        if (pvp->objectName().isEmpty())
            pvp->setObjectName("pvp");
        pvp->resize(789, 600);
        QFont font;
        font.setBold(true);
        pvp->setFont(font);
        pvp->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 47, 65);"));
        frame1 = new QFrame(pvp);
        frame1->setObjectName("frame1");
        frame1->setGeometry(QRect(190, 30, 571, 541));
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
        line_9->setFont(font);
        line_9->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 66, 83);"));
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
        font1.setBold(true);
        eight->setFont(font1);

        gridLayout->addWidget(eight, 4, 2, 1, 1);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName("line_3");
        line_3->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 66, 83);"));
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
        line_5->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 66, 83);"));
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
        line_4->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 66, 83);"));
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_4, 4, 3, 1, 1);

        line_8 = new QFrame(layoutWidget);
        line_8->setObjectName("line_8");
        line_8->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 66, 83);"));
        line_8->setFrameShape(QFrame::Shape::VLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_8, 0, 1, 1, 1);

        line_6 = new QFrame(layoutWidget);
        line_6->setObjectName("line_6");
        line_6->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 66, 83);"));
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
        five->setFont(font1);

        gridLayout->addWidget(five, 2, 2, 1, 1);

        line_7 = new QFrame(layoutWidget);
        line_7->setObjectName("line_7");
        line_7->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 66, 83);"));
        line_7->setFrameShape(QFrame::Shape::VLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_7, 2, 1, 1, 1);

        line_10 = new QFrame(layoutWidget);
        line_10->setObjectName("line_10");
        line_10->setFont(font);
        line_10->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 66, 83);"));
        line_10->setFrameShape(QFrame::Shape::HLine);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_10, 1, 4, 1, 1);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName("line_2");
        line_2->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 66, 83);"));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_2, 3, 0, 1, 1);

        line_11 = new QFrame(layoutWidget);
        line_11->setObjectName("line_11");
        line_11->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 66, 83);"));
        line_11->setFrameShape(QFrame::Shape::HLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_11, 3, 2, 1, 1);

        line_12 = new QFrame(layoutWidget);
        line_12->setObjectName("line_12");
        line_12->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 66, 83);"));
        line_12->setFrameShape(QFrame::Shape::HLine);
        line_12->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_12, 3, 4, 1, 1);

        line = new QFrame(layoutWidget);
        line->setObjectName("line");
        line->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 66, 83);"));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 1);

        startt = new QPushButton(pvp);
        startt->setObjectName("startt");
        startt->setGeometry(QRect(40, 380, 111, 29));
        startt->setFont(font);
        startt->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        main_menu = new QPushButton(pvp);
        main_menu->setObjectName("main_menu");
        main_menu->setGeometry(QRect(40, 430, 111, 29));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        main_menu->setFont(font2);
        main_menu->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        turntext = new QLabel(pvp);
        turntext->setObjectName("turntext");
        turntext->setGeometry(QRect(20, 210, 151, 21));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        turntext->setFont(font3);
        turntext->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);"));
        turntext->setAlignment(Qt::AlignCenter);
        layoutWidget_2 = new QWidget(pvp);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(30, 80, 131, 94));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        p1label = new QLabel(layoutWidget_2);
        p1label->setObjectName("p1label");
        p1label->setFont(font3);
        p1label->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);"));
        p1label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(p1label);

        VS = new QLabel(layoutWidget_2);
        VS->setObjectName("VS");
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        VS->setFont(font4);
        VS->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);"));
        VS->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(VS);

        p2label = new QLabel(layoutWidget_2);
        p2label->setObjectName("p2label");
        p2label->setFont(font3);
        p2label->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);"));
        p2label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(p2label);

        QWidget::setTabOrder(startt, main_menu);
        QWidget::setTabOrder(main_menu, one);
        QWidget::setTabOrder(one, two);
        QWidget::setTabOrder(two, three);
        QWidget::setTabOrder(three, four);
        QWidget::setTabOrder(four, five);
        QWidget::setTabOrder(five, six);
        QWidget::setTabOrder(six, seven);
        QWidget::setTabOrder(seven, eight);
        QWidget::setTabOrder(eight, nine);

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
        main_menu->setText(QCoreApplication::translate("pvp", "Main Menu", nullptr));
        turntext->setText(QCoreApplication::translate("pvp", "TextLabel", nullptr));
        p1label->setText(QCoreApplication::translate("pvp", "Player 1", nullptr));
        VS->setText(QCoreApplication::translate("pvp", "Vs", nullptr));
        p2label->setText(QCoreApplication::translate("pvp", "Player 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pvp: public Ui_pvp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PVP_H
