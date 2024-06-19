#include "mainwindow.h"
#include <QApplication>

QString  currentUsername;
QString othertUsername;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
