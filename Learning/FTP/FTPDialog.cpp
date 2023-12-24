#include <QtGui>
#include "FTPDialog.h"
#include <stdio.h>

FTPDialog::FTPDialog(QWidget *parent):QDialog(parent){
	setupUi(this);
	connect(Get,SIGNAL(clicked()),this,SLOT(SystemCall()));
}
void FTPDialog::SystemCall(){
	FILE* FTP=fopen("FTPOrder.txt","w");
	fprintf(FTP,"open 62.193.13.144\nALVANI\nPAR\ncd \'alvani.\'\nquote site file=jes\n");
	if(A->isChecked()){
		fprintf(FTP,"get lib.jcl(iefbr14)\nquit\n");
	}
	fclose(FTP);
	system("ftp -s FTPOrder.txt");
}
