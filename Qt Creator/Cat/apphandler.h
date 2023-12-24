#ifndef APPHANDLER_H
#define APPHANDLER_H

#include <QObject>
#include <QCoreApplication>

class AppHandler : public QObject
{
  Q_OBJECT
public:
  explicit AppHandler(QCoreApplication* app,QObject *parent = 0);
private:
  QCoreApplication* app;
signals:

public slots:

private slots:

};

#endif // APPHANDLER_H
