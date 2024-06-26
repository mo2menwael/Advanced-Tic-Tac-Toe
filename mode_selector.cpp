#include "mode_selector.h"
#include "ui_mode_selector.h"
#include "mainwindow.h"
#include <qmessagebox.h>
#include <QtWidgets>
#include <QMessageBox>
#include "history.h"


extern  QString othertUsername;
MainWindow *m2;
mode_selector::mode_selector(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::mode_selector)
{
    ui->setupUi(this);
    ui->SecondBox->hide();
    ui->start_button->hide();
    ui->SecondName->hide();

}

mode_selector::~mode_selector()
{
    delete ui;
}

void mode_selector::on_PVP_clicked()
{

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

    othertUsername=ui->SecondBox->text();
    hide();
    pvp_ = new pvp();
    pvp_->show();
}


void mode_selector::on_history_clicked()
{
    hide();
    history_ = new history();
    history_->show();
}


void mode_selector::on_sign_out_clicked()
{
    this->hide();
    m2 = new MainWindow();
    m2->show();
}

