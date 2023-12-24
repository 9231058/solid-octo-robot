#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QAction;
class QLablel;
class FindDialog;
class Spreadsheet;

class MainWindow : public QMainWindow{
	Q_OBJECT

	public:
		MainWindow();
	protected:
		void closeEvent(QCloseEvent *event);
	private slots:
		void newFile();
		void open();
		bool save();
		bool saveAs();
		void find();
		void goToCell();
		void sort();
		void about();
		void openRecentFile();
		void updateStatusBar();
		void spreadsheetModified();
	private:
		void createActions();
		void createMenus();
		void createContextMEnu();
		void createToolBars();
		void createStatusBar();
		void readSettings();
		void writeSettings();
		void okToContinue();

