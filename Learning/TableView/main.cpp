#include <QtGui>

int main(int argc, char *argv[]){
	QApplication app(argc, argv);
 	QTableWidget* view=new QTableWidget(10,10);
	QTableWidgetItem* item=new QTableWidgetItem("Parham");
	QTableWidgetItem item1;
	view->setItem(1,1,item);
	item->setText("Hassan");
	view->show();
	QString Ali("Ali");
	Ali[0]='M';
	item->setText(Ali);
	app.exec();
}
