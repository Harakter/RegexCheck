#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_RegexCheck.h"

class RegexCheck : public QMainWindow
{
	Q_OBJECT

public:
	RegexCheck(QWidget *parent = Q_NULLPTR);

public slots:
	void performSearch(); 

private:
	Ui::RegexCheckClass ui;
};
