#ifndef HTTP_H
#define HTTP_H

#include <QTcpSocket>

class HTTP
{
public:
    HTTP();
private:
    QTcpSocket* socket;
};

#endif // HTTP_H
