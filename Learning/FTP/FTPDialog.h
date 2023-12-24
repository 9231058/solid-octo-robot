#ifndef FTPDIALOG_H
#define FTPDIALOG_H

#include <QDialog>
#include "ui_FTPDialog.h"

class FTPDialog : public QDialog,public Ui::FTPDialog{
	Q_OBJECT

	public:
		FTPDialog(QWidget *parent=0);
	private slots:
		void SystemCall();
};
#endif
