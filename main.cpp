#include "mainwindow.h"

#include <QApplication>
QString player1;
QString player2;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
