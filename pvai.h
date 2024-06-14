#ifndef PVAI_H
#define PVAI_H

#include <QDialog>

namespace Ui {
class pvai;
}

class pvai : public QDialog
{
    Q_OBJECT

public:
    explicit pvai(QWidget *parent = nullptr);
    ~pvai();
    QString board[3][3];

private slots:
    void handleButtonClick(QPushButton* button);

    void setupConnections();

    void on_easy_clicked();

    void on_medium_clicked();

    void on_hard_clicked();

    bool iswon();

    void init();

    void update();

    void computer_turn_easy();

    void computer_turn_medium();

    void move(int r,int c, const QString turn);

    bool isMovesLeft();

    int evaluate();

    int minimax(int depth, bool isMax, int alpha, int beta);

    std::pair<int, int> findBestMove();

    void on_main_menu_clicked();

private:
    Ui::pvai *ui;
};

#endif // PVAI_H
