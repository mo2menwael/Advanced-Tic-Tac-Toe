#ifndef PVP_H
#define PVP_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

namespace Ui {
class pvp;
}

class pvp : public QDialog
{
    Q_OBJECT

public:
    explicit pvp(QWidget *parent = nullptr);
    ~pvp();
    QString board[3][3];
    QTimer *timer = new QTimer(this);
    void updatePerformanceMetrics();

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
    void update();

    void handleButtonClick(QPushButton* button);

    void setupConnections();

    bool iswon();

    bool isdraw();

    void init();

    void on_startt_clicked();

    void save_state();

    void saveIntoMemory();

    void on_main_menu_clicked();

    size_t getMemoryUsage();

    double getCpuUsage();

private:
    Ui::pvp *ui;
};

#endif // PVP_H
