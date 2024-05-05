#include "mode_selector.h"
#include "ui_mode_selector.h"

mode_selector::mode_selector(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::mode_selector)
{
    ui->setupUi(this);
    ui->FirstBox->hide();
    ui->SecondBox->hide();
    ui->start_button->hide();
    ui->FirstName->hide();
    ui->SecondName->hide();
}

mode_selector::~mode_selector()
{
    delete ui;
}

void mode_selector::on_PVP_clicked()
{
    ui->FirstName->show();
    ui->FirstBox->show();
    ui->SecondName->show();
    ui->SecondBox->show();
    ui->start_button->show();
}


void mode_selector::on_PVAI_clicked()
{
    hide();
    pvai_ = new pvai();
    pvai_->show();
}


void mode_selector::on_start_button_clicked()
{
    hide();
    pvp_ = new pvp();
    pvp_->show();
}

