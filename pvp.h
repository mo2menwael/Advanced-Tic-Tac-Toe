#ifndef PVP_H
#define PVP_H

#include <QDialog>

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

private slots:
    void update();

    void on_one_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    bool iswon();

    void init();

    void on_startt_clicked();

    void on_main_menu_clicked();

private:
    Ui::pvp *ui;
};

#endif // PVP_H
