#include <QtGui/QApplication>
#include "mainprog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainProg w;
    w.show();
    
    return a.exec();
}
