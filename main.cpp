#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("test");
    MainWindow w;
    w.show();
    
    return a.exec();
}
