#include <QApplication>
#include "MainDialog.h"

int main(int argc,char* argv[]){
	QApplication app(argc,argv);
	MainDialog dialog;
	dialog.show();
	app.exec();
}
