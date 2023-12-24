#ifndef TCPCONNECTION_H
#define TCPCONNECTION_H

#include <QObject>
#include <QTcpSocket>

class TCPconnection : public QObject
{
    Q_OBJECT
public:
    explicit TCPconnection(QObject *parent = 0);
private:
    QTcpSocket socket;
    QTextStream cout;
public slots:
    void read();
    void write();
    void stateShower(QAbstractSocket::SocketState);
};

#endif // TCPCONNECTION_H
