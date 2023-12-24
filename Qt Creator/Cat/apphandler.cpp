#include "apphandler.h"
#include <iostream>

AppHandler::AppHandler(QCoreApplication* app,QObject *parent) : QObject(parent)
{
  this->app = app;
}
