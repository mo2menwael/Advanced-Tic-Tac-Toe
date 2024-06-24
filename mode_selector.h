#ifndef MODE_SELECTOR_H
#define MODE_SELECTOR_H

#include <QDialog>
#include "pvp.h"
#include "pvai.h"
#include "history.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QPushButton>

namespace Ui {
class mode_selector;
}

class mode_selector : public QDialog
{
    Q_OBJECT

public:
    explicit mode_selector(QWidget *parent = nullptr);
    ~mode_selector();

private slots:
    void on_PVP_clicked();

    void on_PVAI_clicked();

    void on_history_clicked();

    void on_start_button_clicked();

    void on_sign_out_clicked();

private:
    Ui::mode_selector *ui;
    pvp *pvp_;
    pvai *pvai_;
    history *history_;

};

#endif // MODE_SELECTOR_H
