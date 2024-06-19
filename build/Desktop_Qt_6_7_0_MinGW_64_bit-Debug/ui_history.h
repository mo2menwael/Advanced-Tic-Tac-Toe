/********************************************************************************
** Form generated from reading UI file 'history.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORY_H
#define UI_HISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_history
{
public:
    QFrame *frame;
    QLabel *profile;
    QFrame *frame_2;
    QFrame *win;
    QLabel *label;
    QFrame *frame_8;
    QLabel *win_count;
    QFrame *frame_3;
    QFrame *frame_6;
    QLabel *label_2;
    QFrame *frame_9;
    QLabel *draw_count;
    QFrame *frame_4;
    QFrame *frame_7;
    QLabel *label_3;
    QFrame *frame_10;
    QLabel *lose_count;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollBar *verticalScrollBar;
    QFrame *frame_5;
    QFrame *frame_11;
    QLabel *label_4;
    QFrame *frame_12;
    QLabel *label_5;
    QFrame *frame_13;
    QLabel *label_6;
    QFrame *frame_14;
    QLabel *label_7;
    QPushButton *main_menu;

    void setupUi(QWidget *history)
    {
        if (history->objectName().isEmpty())
            history->setObjectName("history");
        history->resize(843, 621);
        history->setLayoutDirection(Qt::RightToLeft);
        frame = new QFrame(history);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(30, 20, 131, 41));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        profile = new QLabel(frame);
        profile->setObjectName("profile");
        profile->setGeometry(QRect(30, 10, 81, 20));
        frame_2 = new QFrame(history);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(60, 130, 191, 111));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Sunken);
        win = new QFrame(frame_2);
        win->setObjectName("win");
        win->setGeometry(QRect(10, 10, 91, 31));
        win->setFrameShape(QFrame::StyledPanel);
        win->setFrameShadow(QFrame::Sunken);
        label = new QLabel(win);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 63, 20));
        label->setAlignment(Qt::AlignCenter);
        frame_8 = new QFrame(frame_2);
        frame_8->setObjectName("frame_8");
        frame_8->setGeometry(QRect(40, 60, 101, 31));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Sunken);
        win_count = new QLabel(frame_8);
        win_count->setObjectName("win_count");
        win_count->setGeometry(QRect(20, 0, 71, 21));
        frame_3 = new QFrame(history);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(320, 130, 191, 111));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Sunken);
        frame_6 = new QFrame(frame_3);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(10, 10, 91, 31));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(frame_6);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 0, 63, 20));
        label_2->setAlignment(Qt::AlignCenter);
        frame_9 = new QFrame(frame_3);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(40, 60, 101, 31));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Sunken);
        draw_count = new QLabel(frame_9);
        draw_count->setObjectName("draw_count");
        draw_count->setGeometry(QRect(20, 0, 63, 20));
        frame_4 = new QFrame(history);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(580, 130, 191, 111));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Sunken);
        frame_7 = new QFrame(frame_4);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(10, 10, 91, 31));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(frame_7);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 0, 63, 20));
        label_3->setAlignment(Qt::AlignCenter);
        frame_10 = new QFrame(frame_4);
        frame_10->setObjectName("frame_10");
        frame_10->setGeometry(QRect(50, 60, 101, 31));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Sunken);
        lose_count = new QLabel(frame_10);
        lose_count->setObjectName("lose_count");
        lose_count->setGeometry(QRect(20, 10, 63, 20));
        scrollArea = new QScrollArea(history);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(60, 330, 711, 151));
        scrollArea->setLayoutDirection(Qt::LeftToRight);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 709, 149));
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(0, 0, 20, 151));
        verticalScrollBar->setOrientation(Qt::Vertical);
        scrollArea->setWidget(scrollAreaWidgetContents);
        frame_5 = new QFrame(history);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(60, 280, 711, 51));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Sunken);
        frame_11 = new QFrame(frame_5);
        frame_11->setObjectName("frame_11");
        frame_11->setGeometry(QRect(20, 10, 81, 31));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(frame_11);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 10, 63, 20));
        frame_12 = new QFrame(frame_5);
        frame_12->setObjectName("frame_12");
        frame_12->setGeometry(QRect(140, 10, 81, 31));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(frame_12);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 10, 63, 20));
        frame_13 = new QFrame(frame_5);
        frame_13->setObjectName("frame_13");
        frame_13->setGeometry(QRect(260, 10, 91, 31));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(frame_13);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 10, 81, 20));
        frame_14 = new QFrame(frame_5);
        frame_14->setObjectName("frame_14");
        frame_14->setGeometry(QRect(390, 10, 91, 31));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(frame_14);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 10, 81, 20));
        label_7->setLayoutDirection(Qt::LeftToRight);
        main_menu = new QPushButton(history);
        main_menu->setObjectName("main_menu");
        main_menu->setGeometry(QRect(652, 30, 151, 29));

        retranslateUi(history);

        QMetaObject::connectSlotsByName(history);
    } // setupUi

    void retranslateUi(QWidget *history)
    {
        history->setWindowTitle(QCoreApplication::translate("history", "History", nullptr));
        profile->setText(QCoreApplication::translate("history", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("history", "Win", nullptr));
        win_count->setText(QCoreApplication::translate("history", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("history", "Draw", nullptr));
        draw_count->setText(QCoreApplication::translate("history", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("history", "Lose", nullptr));
        lose_count->setText(QCoreApplication::translate("history", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("history", "ID", nullptr));
        label_5->setText(QCoreApplication::translate("history", "Result", nullptr));
        label_6->setText(QCoreApplication::translate("history", "game_level", nullptr));
        label_7->setText(QCoreApplication::translate("history", "Date", nullptr));
        main_menu->setText(QCoreApplication::translate("history", " Main Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class history: public Ui_history {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORY_H
