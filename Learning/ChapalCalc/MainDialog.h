#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include <QDialog>
#include "ui_maindialog.h"

class MainDialog : public QDialog,public Ui::MainDialog{
	Q_OBJECT
	public:
		MainDialog(QWidget* parent=0);
	private slots:
		void answer_button_press();
		void plus_button_press();
		void minus_button_press();
	private:
		enum TOKEN{PLUS,MINUS};
		TOKEN lastToken;
		int lastInt;
};
#endif
