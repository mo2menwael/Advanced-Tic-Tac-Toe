#ifndef HISTORY_H
#define HISTORY_H
#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QVBoxLayout>
#include <QLabel>
#include <QScrollArea>
#include <QFrame>
#include "display.h"
#include <array>
#include <QString>


namespace Ui {
class history;
}

class history : public QDialog
{
    Q_OBJECT

public:
    explicit history(QWidget *parent = nullptr);
    ~history();

public:
    QSqlDatabase mydb;

    void connClose()
    {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool connOpen()
    {
        mydb=QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/Users/moame/Documents/QT/Advanced-Tic-Tac-Toe/SqLite/TicTacToe_Project.db");

        if(!mydb.open()){
            qDebug()<<("none");
            return false;
        }

        else{
            qDebug()<<("DataBaseIsOpened");
            return true;
        }
    }




private slots:
    //void on_profile_linkActivated(const QString &link);

    // void on_frame_3_customContextMenuRequested(const QPoint &pos);

    void createLabels(int numberOfLabels, QScrollArea* scrollArea);
    void on_verticalScrollBar_sliderMoved(int position);
    void openWindow(int gameId);
    void on_main_menu_clicked();
    std::array<QString, 3> getresult(int gameId);

private:
    Ui::history *ui;
      display *display_;

};

#endif // HISTORY_H
