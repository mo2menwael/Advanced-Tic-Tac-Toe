#include "pvai.h"
#include "ui_pvai.h"

pvai::pvai(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::pvai)
{
    ui->setupUi(this);
}

pvai::~pvai()
{
    delete ui;
}
