#include "mainwindow.h"

#include <QApplication>
#include <iostream>
#include <QStyle>
#include <QVector>
#include <functional>
#include <QVector4D>
#include <QStyleFactory>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
