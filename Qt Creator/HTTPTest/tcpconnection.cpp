#include "tcpconnection.h"
#include <QTcpSocket>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

TCPconnection::TCPconnection(QObject *parent):
    QObject(parent),cout(stdout)
{
    cout<<"Connecting ..."<<"\n";
    cout<<"Hello world of console Qt"<<"\n";
    cout.flush();
    connect(&socket,SIGNAL(stateChanged(QAbstractSocket::SocketState)),this,SLOT(stateShower(QAbstractSocket::SocketState)));
    connect(&socket,SIGNAL(connected()),this,SLOT(write()));
    connect(&socket,SIGNAL(readyRead()),this,SLOT(read()));
    socket.setReadBufferSize(1000);
    socket.connectToHost("192.168.1.200",80);
}

void TCPconnection::read(){
    QByteArray data = socket.readAll();
    QTextStream stream(&data);
    QString test;
    stream>>test;
    std::cout<<test.toStdString()<<std::endl;
    std::cout<<data.data()<<std::endl;
    exit(0);
}

void TCPconnection::write(){
    QString* request = new QString("GET / HTTP/1.1\n");
    socket.write(request->toLocal8Bit());
    socket.flush();
    delete request;
    request = new QString("HOST: www.parham.home\n\n");
    socket.write(request->toLocal8Bit());
}


void TCPconnection::stateShower(QAbstractSocket::SocketState state){
    std::cout<<"State changed : "<<state<<"\n";
}
