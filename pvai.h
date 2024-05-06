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
    void on_one_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_easy_clicked();

    void on_medium_clicked();

    void on_hard_clicked();

    bool iswon();

    void init();

    void update();

    void computer_turn_easy();

    void computer_turn_medium();

    void computer_turn_hard();

    void move(int r,int c);

private:
    Ui::pvai *ui;
};

#endif // PVAI_H
