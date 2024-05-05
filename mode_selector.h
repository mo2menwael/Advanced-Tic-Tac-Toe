#ifndef MODE_SELECTOR_H
#define MODE_SELECTOR_H

#include <QDialog>
#include "pvp.h"
#include "pvai.h"

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

    void on_start_button_clicked();

private:
    Ui::mode_selector *ui;
    pvp *pvp_;
    pvai *pvai_;
};

#endif // MODE_SELECTOR_H
