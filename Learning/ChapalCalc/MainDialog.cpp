#include <QtGui>
#include "MainDialog.h"

MainDialog::MainDialog(QWidget* parent):QDialog(parent){
	setupUi(this);
	connect(plusButton,SIGNAL(clicked()),this,SLOT(plus_button_press()));
	connect(minusButton,SIGNAL(clicked()),this,SLOT(minus_button_press()));
	connect(answerButton,SIGNAL(clicked()),this,SLOT(answer_button_press()));
}
void MainDialog::plus_button_press(){
	lastToken=PLUS;
	lastInt=lineEdit->text().toInt();
}
void MainDialog::minus_button_press(){
	lastToken=MINUS;
	lastInt=lineEdit->text().toInt();
}
void MainDialog::answer_button_press(){
	int answer=0;
	int operand=lineEdit->text().toInt();
	if(lastToken==MINUS)
		answer=lastInt-operand;
	else if(lastToken==PLUS)
		answer=lastInt+operand;
	lineEdit->setText(QString::number(answer));
	lastInt=operand;
}
