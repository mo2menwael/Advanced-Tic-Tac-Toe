/********************************************************************************
** Form generated from reading UI file 'display.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_H
#define UI_DISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_display
{
public:
    QFrame *frame1;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *seven_3;
    QFrame *line_40;
    QFrame *line_48;
    QLabel *three_3;
    QFrame *line_38;
    QFrame *line_41;
    QFrame *line_37;
    QFrame *line_42;
    QFrame *line_39;
    QFrame *line_47;
    QLabel *four_3;
    QFrame *line_46;
    QFrame *line_44;
    QFrame *line_45;
    QLabel *five_3;
    QLabel *nine_3;
    QFrame *line_43;
    QLabel *two_3;
    QLabel *eight_3;
    QLabel *six_3;
    QLabel *one_3;
    QPushButton *main_menu;
    QPushButton *back_to_history;

    void setupUi(QWidget *display)
    {
        if (display->objectName().isEmpty())
            display->setObjectName("display");
        display->setWindowModality(Qt::WindowModal);
        display->resize(879, 682);
        frame1 = new QFrame(display);
        frame1->setObjectName("frame1");
        frame1->setGeometry(QRect(20, 50, 661, 541));
        frame1->setFrameShape(QFrame::StyledPanel);
        frame1->setFrameShadow(QFrame::Raised);
        layoutWidget_4 = new QWidget(frame1);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(10, 10, 645, 521));
        gridLayout_4 = new QGridLayout(layoutWidget_4);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        seven_3 = new QLabel(layoutWidget_4);
        seven_3->setObjectName("seven_3");
        QFont font;
        font.setPointSize(30);
        seven_3->setFont(font);
        seven_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(seven_3, 4, 0, 1, 1);

        line_40 = new QFrame(layoutWidget_4);
        line_40->setObjectName("line_40");
        line_40->setFrameShape(QFrame::Shape::VLine);
        line_40->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_40, 4, 3, 1, 1);

        line_48 = new QFrame(layoutWidget_4);
        line_48->setObjectName("line_48");
        line_48->setFrameShape(QFrame::Shape::HLine);
        line_48->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_48, 1, 0, 1, 1);

        three_3 = new QLabel(layoutWidget_4);
        three_3->setObjectName("three_3");
        three_3->setFont(font);
        three_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(three_3, 0, 4, 1, 1);

        line_38 = new QFrame(layoutWidget_4);
        line_38->setObjectName("line_38");
        line_38->setFrameShape(QFrame::Shape::VLine);
        line_38->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_38, 2, 3, 1, 1);

        line_41 = new QFrame(layoutWidget_4);
        line_41->setObjectName("line_41");
        line_41->setFrameShape(QFrame::Shape::VLine);
        line_41->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_41, 0, 1, 1, 1);

        line_37 = new QFrame(layoutWidget_4);
        line_37->setObjectName("line_37");
        QFont font1;
        font1.setBold(true);
        line_37->setFont(font1);
        line_37->setFrameShape(QFrame::Shape::HLine);
        line_37->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_37, 1, 2, 1, 1);

        line_42 = new QFrame(layoutWidget_4);
        line_42->setObjectName("line_42");
        line_42->setFrameShape(QFrame::Shape::VLine);
        line_42->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_42, 4, 1, 1, 1);

        line_39 = new QFrame(layoutWidget_4);
        line_39->setObjectName("line_39");
        line_39->setFrameShape(QFrame::Shape::VLine);
        line_39->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_39, 0, 3, 1, 1);

        line_47 = new QFrame(layoutWidget_4);
        line_47->setObjectName("line_47");
        line_47->setFrameShape(QFrame::Shape::HLine);
        line_47->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_47, 3, 4, 1, 1);

        four_3 = new QLabel(layoutWidget_4);
        four_3->setObjectName("four_3");
        four_3->setFont(font);
        four_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(four_3, 2, 0, 1, 1);

        line_46 = new QFrame(layoutWidget_4);
        line_46->setObjectName("line_46");
        line_46->setFrameShape(QFrame::Shape::HLine);
        line_46->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_46, 3, 2, 1, 1);

        line_44 = new QFrame(layoutWidget_4);
        line_44->setObjectName("line_44");
        line_44->setFont(font1);
        line_44->setFrameShape(QFrame::Shape::HLine);
        line_44->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_44, 1, 4, 1, 1);

        line_45 = new QFrame(layoutWidget_4);
        line_45->setObjectName("line_45");
        line_45->setFrameShape(QFrame::Shape::HLine);
        line_45->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_45, 3, 0, 1, 1);

        five_3 = new QLabel(layoutWidget_4);
        five_3->setObjectName("five_3");
        five_3->setFont(font);
        five_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(five_3, 2, 2, 1, 1);

        nine_3 = new QLabel(layoutWidget_4);
        nine_3->setObjectName("nine_3");
        nine_3->setFont(font);
        nine_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(nine_3, 4, 4, 1, 1);

        line_43 = new QFrame(layoutWidget_4);
        line_43->setObjectName("line_43");
        line_43->setFrameShape(QFrame::Shape::VLine);
        line_43->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_43, 2, 1, 1, 1);

        two_3 = new QLabel(layoutWidget_4);
        two_3->setObjectName("two_3");
        two_3->setFont(font);
        two_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(two_3, 0, 2, 1, 1);

        eight_3 = new QLabel(layoutWidget_4);
        eight_3->setObjectName("eight_3");
        eight_3->setFont(font);
        eight_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(eight_3, 4, 2, 1, 1);

        six_3 = new QLabel(layoutWidget_4);
        six_3->setObjectName("six_3");
        six_3->setFont(font);
        six_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(six_3, 2, 4, 1, 1);

        one_3 = new QLabel(layoutWidget_4);
        one_3->setObjectName("one_3");
        one_3->setFont(font);
        one_3->setAutoFillBackground(false);
        one_3->setScaledContents(true);
        one_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(one_3, 0, 0, 1, 1);

        main_menu = new QPushButton(display);
        main_menu->setObjectName("main_menu");
        main_menu->setGeometry(QRect(710, 140, 131, 29));
        back_to_history = new QPushButton(display);
        back_to_history->setObjectName("back_to_history");
        back_to_history->setGeometry(QRect(710, 190, 131, 29));

        retranslateUi(display);

        QMetaObject::connectSlotsByName(display);
    } // setupUi

    void retranslateUi(QWidget *display)
    {
        display->setWindowTitle(QCoreApplication::translate("display", "Form", nullptr));
        seven_3->setText(QString());
        three_3->setText(QString());
        four_3->setText(QString());
        five_3->setText(QString());
        nine_3->setText(QString());
        two_3->setText(QString());
        eight_3->setText(QString());
        six_3->setText(QString());
        one_3->setText(QString());
        main_menu->setText(QCoreApplication::translate("display", " Main Menu", nullptr));
        back_to_history->setText(QCoreApplication::translate("display", "Back ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class display: public Ui_display {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_H
