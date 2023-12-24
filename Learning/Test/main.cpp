#include "mainwindow.h"
#include <QApplication>
#include <QTextEdit>
#include <QPushButton>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QWidget* widget=w.centralWidget();
    widget->activateWindow();
    QTextEdit *Cops=new QTextEdit(widget);
    Cops->show();
    QString S1;
    QPushButton *Button=new QPushButton(widget);
    Button->show();
    if(Button->hitButton()){
        Cops->append(S1);
        QLabel *L=new QLabel("Salam");
        L->show();
        int n=S1.toUInt();
    }
    return a.exec();
}
