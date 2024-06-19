/********************************************************************************
** Form generated from reading UI file 'pvai.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PVAI_H
#define UI_PVAI_H

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

class Ui_pvai
{
public:
    QLabel *difficulty;
    QPushButton *easy;
    QPushButton *medium;
    QPushButton *hard;
    QPushButton *main_menu;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *username;
    QLabel *VS;
    QLabel *diff;
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

    void setupUi(QDialog *pvai)
    {
        if (pvai->objectName().isEmpty())
            pvai->setObjectName("pvai");
        pvai->resize(789, 600);
        difficulty = new QLabel(pvai);
        difficulty->setObjectName("difficulty");
        difficulty->setGeometry(QRect(40, 200, 121, 20));
        difficulty->setAlignment(Qt::AlignCenter);
        easy = new QPushButton(pvai);
        easy->setObjectName("easy");
        easy->setGeometry(QRect(60, 250, 81, 29));
        medium = new QPushButton(pvai);
        medium->setObjectName("medium");
        medium->setGeometry(QRect(60, 310, 81, 29));
        hard = new QPushButton(pvai);
        hard->setObjectName("hard");
        hard->setGeometry(QRect(60, 370, 81, 29));
        main_menu = new QPushButton(pvai);
        main_menu->setObjectName("main_menu");
        main_menu->setGeometry(QRect(30, 490, 151, 29));
        layoutWidget_2 = new QWidget(pvai);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(40, 70, 131, 76));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        username = new QLabel(layoutWidget_2);
        username->setObjectName("username");
        username->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(username);

        VS = new QLabel(layoutWidget_2);
        VS->setObjectName("VS");
        VS->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(VS);

        diff = new QLabel(layoutWidget_2);
        diff->setObjectName("diff");
        diff->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(diff);

        frame1 = new QFrame(pvai);
        frame1->setObjectName("frame1");
        frame1->setGeometry(QRect(190, 10, 571, 541));
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
        five->setFont(font1);

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


        retranslateUi(pvai);

        QMetaObject::connectSlotsByName(pvai);
    } // setupUi

    void retranslateUi(QDialog *pvai)
    {
        pvai->setWindowTitle(QCoreApplication::translate("pvai", "Player VS AI", nullptr));
        difficulty->setText(QCoreApplication::translate("pvai", "Choose Difficulty", nullptr));
        easy->setText(QCoreApplication::translate("pvai", "Easy", nullptr));
        medium->setText(QCoreApplication::translate("pvai", "Medium", nullptr));
        hard->setText(QCoreApplication::translate("pvai", "Hard", nullptr));
        main_menu->setText(QCoreApplication::translate("pvai", "Main Menu", nullptr));
        username->setText(QCoreApplication::translate("pvai", "Username", nullptr));
        VS->setText(QCoreApplication::translate("pvai", "Vs", nullptr));
        diff->setText(QCoreApplication::translate("pvai", "Ai(Diff)", nullptr));
        eight->setText(QString());
        six->setText(QString());
        nine->setText(QString());
        three->setText(QString());
        one->setText(QString());
        two->setText(QString());
        seven->setText(QString());
        four->setText(QString());
        five->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pvai: public Ui_pvai {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PVAI_H
