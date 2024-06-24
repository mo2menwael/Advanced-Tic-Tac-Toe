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
    QFrame *frame_15;
    QLabel *TotalGames;

    void setupUi(QWidget *history)
    {
        if (history->objectName().isEmpty())
            history->setObjectName("history");
        history->resize(843, 621);
        history->setLayoutDirection(Qt::RightToLeft);
        history->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 47, 65);\n"
"color: rgb(97, 184, 211);"));
        frame = new QFrame(history);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(40, 30, 241, 41));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setKerning(true);
        frame->setFont(font);
        frame->setStyleSheet(QString::fromUtf8("color: rgb(97, 184, 211);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        profile = new QLabel(frame);
        profile->setObjectName("profile");
        profile->setGeometry(QRect(50, 0, 221, 41));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        profile->setFont(font1);
        profile->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);"));
        frame_2 = new QFrame(history);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(60, 130, 191, 111));
        QFont font2;
        font2.setBold(false);
        frame_2->setFont(font2);
        frame_2->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(93, 184, 211);\n"
"border-radius: 5px;\n"
""));
        frame_2->setFrameShape(QFrame::WinPanel);
        frame_2->setFrameShadow(QFrame::Plain);
        win = new QFrame(frame_2);
        win->setObjectName("win");
        win->setGeometry(QRect(10, 10, 91, 31));
        win->setFrameShape(QFrame::WinPanel);
        win->setFrameShadow(QFrame::Plain);
        label = new QLabel(win);
        label->setObjectName("label");
        label->setGeometry(QRect(13, 5, 63, 20));
        QFont font3;
        font3.setBold(true);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);\n"
"border:0;"));
        label->setAlignment(Qt::AlignCenter);
        frame_8 = new QFrame(frame_2);
        frame_8->setObjectName("frame_8");
        frame_8->setGeometry(QRect(50, 60, 81, 31));
        frame_8->setFrameShape(QFrame::WinPanel);
        frame_8->setFrameShadow(QFrame::Plain);
        win_count = new QLabel(frame_8);
        win_count->setObjectName("win_count");
        win_count->setGeometry(QRect(10, 5, 63, 20));
        win_count->setFont(font3);
        win_count->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);\n"
"border:0;"));
        win_count->setAlignment(Qt::AlignCenter);
        frame_3 = new QFrame(history);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(320, 130, 191, 111));
        QFont font4;
        font4.setPointSize(9);
        frame_3->setFont(font4);
        frame_3->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(93, 184, 211);\n"
"border-radius: 5px;\n"
""));
        frame_3->setFrameShape(QFrame::WinPanel);
        frame_3->setFrameShadow(QFrame::Plain);
        frame_6 = new QFrame(frame_3);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(10, 10, 91, 31));
        frame_6->setFrameShape(QFrame::WinPanel);
        frame_6->setFrameShadow(QFrame::Plain);
        label_2 = new QLabel(frame_6);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(13, 5, 63, 20));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);\n"
"border:0;"));
        label_2->setAlignment(Qt::AlignCenter);
        frame_9 = new QFrame(frame_3);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(50, 60, 81, 31));
        frame_9->setFrameShape(QFrame::WinPanel);
        frame_9->setFrameShadow(QFrame::Plain);
        draw_count = new QLabel(frame_9);
        draw_count->setObjectName("draw_count");
        draw_count->setGeometry(QRect(10, 5, 63, 20));
        draw_count->setFont(font3);
        draw_count->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);\n"
"border:0;"));
        draw_count->setAlignment(Qt::AlignCenter);
        frame_4 = new QFrame(history);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(580, 130, 191, 111));
        frame_4->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(93, 184, 211);\n"
"border-radius: 5px;\n"
""));
        frame_4->setFrameShape(QFrame::WinPanel);
        frame_4->setFrameShadow(QFrame::Plain);
        frame_7 = new QFrame(frame_4);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(10, 10, 91, 31));
        frame_7->setFrameShape(QFrame::WinPanel);
        frame_7->setFrameShadow(QFrame::Plain);
        label_3 = new QLabel(frame_7);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(13, 5, 63, 20));
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);\n"
"border:0;"));
        label_3->setAlignment(Qt::AlignCenter);
        frame_10 = new QFrame(frame_4);
        frame_10->setObjectName("frame_10");
        frame_10->setGeometry(QRect(60, 60, 81, 31));
        frame_10->setFrameShape(QFrame::WinPanel);
        frame_10->setFrameShadow(QFrame::Plain);
        lose_count = new QLabel(frame_10);
        lose_count->setObjectName("lose_count");
        lose_count->setGeometry(QRect(10, 5, 63, 20));
        lose_count->setFont(font3);
        lose_count->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);\n"
"border:0;"));
        lose_count->setAlignment(Qt::AlignCenter);
        scrollArea = new QScrollArea(history);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(60, 330, 711, 171));
        scrollArea->setLayoutDirection(Qt::LeftToRight);
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setFrameShape(QFrame::WinPanel);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 707, 167));
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(0, 0, 20, 171));
        verticalScrollBar->setOrientation(Qt::Vertical);
        scrollArea->setWidget(scrollAreaWidgetContents);
        frame_5 = new QFrame(history);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(60, 280, 711, 51));
        frame_5->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(93, 184, 211);\n"
"border-radius: 5px;\n"
""));
        frame_5->setFrameShape(QFrame::WinPanel);
        frame_5->setFrameShadow(QFrame::Plain);
        frame_11 = new QFrame(frame_5);
        frame_11->setObjectName("frame_11");
        frame_11->setGeometry(QRect(10, 10, 81, 31));
        frame_11->setFrameShape(QFrame::WinPanel);
        frame_11->setFrameShadow(QFrame::Plain);
        label_4 = new QLabel(frame_11);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 5, 63, 20));
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);\n"
"border:0;"));
        label_4->setAlignment(Qt::AlignCenter);
        frame_12 = new QFrame(frame_5);
        frame_12->setObjectName("frame_12");
        frame_12->setGeometry(QRect(135, 10, 91, 31));
        frame_12->setFrameShape(QFrame::WinPanel);
        frame_12->setFrameShadow(QFrame::Plain);
        label_5 = new QLabel(frame_12);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(5, 5, 81, 20));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);\n"
"border:0;"));
        label_5->setAlignment(Qt::AlignCenter);
        frame_13 = new QFrame(frame_5);
        frame_13->setObjectName("frame_13");
        frame_13->setGeometry(QRect(257, 10, 91, 31));
        frame_13->setFrameShape(QFrame::WinPanel);
        frame_13->setFrameShadow(QFrame::Plain);
        label_6 = new QLabel(frame_13);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(5, 5, 81, 20));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);\n"
"border:0;"));
        label_6->setAlignment(Qt::AlignCenter);
        frame_14 = new QFrame(frame_5);
        frame_14->setObjectName("frame_14");
        frame_14->setGeometry(QRect(430, 10, 91, 31));
        frame_14->setFrameShape(QFrame::WinPanel);
        frame_14->setFrameShadow(QFrame::Plain);
        label_7 = new QLabel(frame_14);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(5, 5, 81, 20));
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);\n"
"border:0;"));
        label_7->setAlignment(Qt::AlignCenter);
        main_menu = new QPushButton(history);
        main_menu->setObjectName("main_menu");
        main_menu->setGeometry(QRect(350, 535, 141, 41));
        main_menu->setFont(font3);
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
        frame_15 = new QFrame(history);
        frame_15->setObjectName("frame_15");
        frame_15->setGeometry(QRect(460, 30, 291, 41));
        frame_15->setFont(font);
        frame_15->setStyleSheet(QString::fromUtf8("color: rgb(97, 184, 211);"));
        frame_15->setFrameShape(QFrame::NoFrame);
        frame_15->setFrameShadow(QFrame::Plain);
        TotalGames = new QLabel(frame_15);
        TotalGames->setObjectName("TotalGames");
        TotalGames->setGeometry(QRect(40, 0, 281, 41));
        TotalGames->setFont(font1);
        TotalGames->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);"));

        retranslateUi(history);

        QMetaObject::connectSlotsByName(history);
    } // setupUi

    void retranslateUi(QWidget *history)
    {
        history->setWindowTitle(QCoreApplication::translate("history", "History", nullptr));
        profile->setText(QCoreApplication::translate("history", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("history", "Wins", nullptr));
        win_count->setText(QCoreApplication::translate("history", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("history", "Draws", nullptr));
        draw_count->setText(QCoreApplication::translate("history", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("history", "Losses", nullptr));
        lose_count->setText(QCoreApplication::translate("history", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("history", "Game ID", nullptr));
        label_5->setText(QCoreApplication::translate("history", "Game Level", nullptr));
        label_6->setText(QCoreApplication::translate("history", "Result", nullptr));
        label_7->setText(QCoreApplication::translate("history", "Time", nullptr));
        main_menu->setText(QCoreApplication::translate("history", " Main Menu", nullptr));
        TotalGames->setText(QCoreApplication::translate("history", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class history: public Ui_history {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORY_H
