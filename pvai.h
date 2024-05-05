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

private:
    Ui::pvai *ui;
};

#endif // PVAI_H
