#include <QCoreApplication>
#include "tcpconnection.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    TCPconnection test;
    return a.exec();
}
