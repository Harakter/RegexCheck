#pragma once

#include <QtWidgets/QMainWindow>
#include <QException>
#include <QStringListModel>
#include <QLayout>
#include <QFileDialog>
#include <QMenuBar>
#include <QTextStream>
#include <QMessageBox>

#include "ui_RegexCheck.h"

class RegexCheck : public QMainWindow
{
	Q_OBJECT

public:
	RegexCheck(QWidget *parent = Q_NULLPTR);

public slots:
	void performSearch(); 
	void export_file();
	void on_actionSave_triggered();
private:
	Ui::RegexCheckClass ui;
	QMenuBar* main_menu;

};
