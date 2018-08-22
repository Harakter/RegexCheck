#include "RegexCheck.h"
#include <regex>
#include <QStringListModel>
#include <QLayout>

RegexCheck::RegexCheck(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	ui.statusBar->setSizeGripEnabled(false);

	this->setFixedSize(this->size());

	connect(ui.inputRegex
		,	SIGNAL(textChanged(const QString &))
		,	this
		,	SLOT(performSearch())
		);

	connect(ui.inputText
		,	SIGNAL(textChanged())
		,	this
		,	SLOT(performSearch())
		);
}

void RegexCheck::performSearch()
{
	std::string reg_str = ui.inputRegex->text().toStdString();
	std::string srch_str = ui.inputText->toPlainText().toStdString();
	
	if (reg_str.empty() ||
		srch_str.empty())
	{
		return;
	}

	std::regex testing;

	QStringList temp_list;
	QStringListModel *mdl = new QStringListModel;

	try
	{
		testing.assign(reg_str);
	}
	catch (std::exception ex)
	{
		mdl->setStringList(temp_list);

		ui.resultList->setModel(mdl);
		return;
	}
	
	std::sregex_iterator begin(srch_str.begin(), srch_str.end(), testing);
	std::sregex_iterator end;

	int row_count = 0;
	
	for (; begin != end; ++begin)
	{
		temp_list << QString::fromStdString(((*begin).str()));
	}

	mdl->setStringList(temp_list);
	ui.resultList->setModel(mdl);
}