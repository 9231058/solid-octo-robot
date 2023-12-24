#include "iconeditor.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  IconEditor icon;
  icon.show();
  return a.exec();
}
