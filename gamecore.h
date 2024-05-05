#ifndef GAMECORE_H
#define GAMECORE_H

#include <QDialog>

namespace Ui {
class gamecore;
}

class gamecore : public QDialog
{
    Q_OBJECT

public:
    explicit gamecore(QWidget *parent = nullptr);
    ~gamecore();

private:
    Ui::gamecore *ui;
};

#endif // GAMECORE_H
