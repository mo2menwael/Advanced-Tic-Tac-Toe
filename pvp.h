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

    void handleButtonClick(QPushButton* button);

    void setupConnections();

    bool iswon();

    void init();

    void on_startt_clicked();

    void on_main_menu_clicked();

private:
    Ui::pvp *ui;
};

#endif // PVP_H
