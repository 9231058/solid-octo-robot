#include <QApplication>
#include "FTPDialog.h"

int main(int argc,char *argv[]){
	QApplication app(argc,argv);
	FTPDialog *dialog=new FTPDialog;
	dialog->show();
	return app.exec();
}
