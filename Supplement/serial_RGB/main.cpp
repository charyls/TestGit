#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(560, 280);
    w.setWindowTitle("RGB LED Controller");
    w.show();

    return a.exec();
}
