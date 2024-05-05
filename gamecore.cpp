#include "gamecore.h"
#include "ui_gamecore.h"

gamecore::gamecore(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::gamecore)
{
    ui->setupUi(this);
}

gamecore::~gamecore()
{
    delete ui;
}
