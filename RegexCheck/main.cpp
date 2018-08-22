#include "RegexCheck.h"
#include <QtWidgets/QApplication>
#include <regex>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	RegexCheck w;

	w.show();

	return a.exec();
}
