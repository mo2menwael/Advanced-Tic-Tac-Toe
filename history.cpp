#include "history.h"
#include "ui_history.h"
#include "display.h"
#include <QtWidgets>
#include "mainwindow.h"
#include "mode_selector.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QScrollArea>
#include <QFrame>
#include <array>


extern QString currentUsername;
QString WinCount;
QString DrawCount;
QString LoseCount;
int lastGameId;
QString gamedetails[3];

history::history(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::history)
{
    ui->setupUi(this);
    ui->profile->setText(currentUsername+"'s History");
    connOpen();
    qDebug() << "Current Username: " << currentUsername; // Debug statement

    QSqlQuery qry;
    qry.prepare("SELECT win, draw, lose FROM data WHERE username=:currentUsername");
    qry.bindValue(":currentUsername", currentUsername);

    if (qry.exec()) {
        if(qry.next()){
            WinCount = qry.value(0).toString();
            DrawCount = qry.value(1).toString();
            LoseCount = qry.value(2).toString();

            qDebug() << "Win: " << WinCount; // Debug statement
            qDebug() << "Draw: " << DrawCount; // Debug statement
            qDebug() << "Lose: " << LoseCount; // Debug statement

            ui->win_count->setText(WinCount);
            ui->draw_count->setText(DrawCount);
            ui->lose_count->setText(LoseCount);
        } else {
            qDebug() << "No data found for user."; // Debug statement
        }
    } else {
        // Handle SQL query error
        qDebug() << "SQL query error: " << qry.lastError().text();
        ui->win_count->setText("Error");
        ui->draw_count->setText("Error");
        ui->lose_count->setText("Error");
    }
    connClose();
    connOpen();
    QString queryString = QString("SELECT MAX(id) AS last_game_id FROM player_%1").arg(currentUsername);
    qDebug() << "Query String: " << currentUsername;

    QSqlQuery query;
    query.prepare(queryString);
    if(query.exec()) {
        if(query.next()) {

            lastGameId = query.value(0).toInt();
            // Now you have the lastGameId for the current player
            // You can use this value as needed in your application
        }
    } else {
        // Handle the error
        qDebug() << "Error getting last game ID for current player:" << query.lastError().text();
    }
    connClose();

    // Assuming 'ui->verticalLayout' is your QVBoxLayout in the .ui file
    createLabels(lastGameId,ui->scrollArea);

}
/*QString history::getPlayerLevel(int gameId) {
    QString gameLevel; // Variable to store game level
    if(!connOpen()){
        qDebug() << "Failed to open the database";
        return "failed";
    }
    // Assuming you have a database connection and a query object
    QSqlQuery query;
    QString queryString = "SELECT game_level FROM player_" + currentUsername + " WHERE id = :gameId";
    query.prepare(queryString);
    query.bindValue(":gameId", gameId);

    if (query.exec() && query.next()) {
        gameLevel = query.value(0).toString(); // Retrieve game_level as a QString
    } else {
        gameLevel = "Unknown"; // Handle error or default case
    }
    connClose();

    return gameLevel;
}
*/
std::array<QString, 3> history::getresult(int gameId){

    //QString gameresult; // Variable to store game level

    std::array<QString, 3> gamedetails = {"Unknown", "Unknown", "Unknown"};
    if(!connOpen()){
        qDebug() << "Failed to open the database";
        return {"failed", "failed", "failed"};
    }
    // Assuming you have a database connection and a query object
    QSqlQuery query;
    QString queryString = "SELECT game_level,result,game_played_date FROM player_" + currentUsername + " WHERE id = :gameId";
    query.prepare(queryString);
    query.bindValue(":gameId", gameId);

    if (query.exec() && query.next()) {
        gamedetails[0] = query.value(0).toString(); // Retrieve game_level as a QString
        gamedetails[1] = query.value(1).toString();
        gamedetails[2] = query.value(2).toString();
    } else {
        return {"failed", "failed", "failed"}; // Handle error or default case
    }
    connClose();

    return gamedetails;
}


void history::createLabels(int maxGameId, QScrollArea* scrollArea) {
    QWidget *scrollWidget = new QWidget;
    QVBoxLayout *scrollLayout = new QVBoxLayout(scrollWidget);
    std::array<QString, 3> resultsArray;
    for (int i = 0; i < maxGameId; ++i) {
        QFrame *frame = new QFrame;
        frame->setFrameStyle(QFrame::Panel | QFrame::Sunken);
        QHBoxLayout *frameLayout = new QHBoxLayout(frame);

        QLabel *label1 = new QLabel(QString::number(i + 1), frame);
        resultsArray = getresult(i+1);
        //QString game_result = getresult(i+1);
        QLabel *label2 = new QLabel(resultsArray[0], frame);
       // QString game_level= getPlayerLevel(i+1);
        QLabel *label3 = new QLabel(resultsArray[1], frame);
        QLabel *label4 = new QLabel(resultsArray[2], frame);
        QPushButton *button = new QPushButton("show", frame);

        int gameId = i + 1; // This is the game ID that corresponds to the button

        // Use a lambda function to capture the current gameId and pass it to openWindow
        connect(button, &QPushButton::clicked, this, [this, gameId]() {
            openWindow(gameId);
        });

        frameLayout->addWidget(label1);
        frameLayout->addSpacing(10);
        frameLayout->addWidget(label2);
        frameLayout->addSpacing(10);
        frameLayout->addWidget(label3);
        frameLayout->addSpacing(10);
        frameLayout->addWidget(label4);
        frameLayout->addSpacing(10);
        frameLayout->addWidget(button);

        scrollLayout->addWidget(frame);
    }

    scrollArea->setWidget(scrollWidget);
    scrollArea->setWidgetResizable(true);
}



void history::on_verticalScrollBar_sliderMoved(int position)
{
    // Assuming 'container' is a pointer to your QScrollArea
    ui->scrollArea->verticalScrollBar()->setValue(position);
}


history::~history()
{
    delete ui;
}


void history::on_main_menu_clicked()
{
    this->hide();
    mode_selector mode;
    mode.setModal(true);
    mode.exec();
}

/* Slot that opens the desired window
void history::openWindow() {
    hide();
    display_ = new display();
    display_->show();
}
*/
void history::openWindow(int gameId) {
    hide();
    display_ = new display(gameId); // Pass the game ID when creating 'display'
    display_->show();
}
