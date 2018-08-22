#include "RegexCheck.h"
#include <regex>
#include <QStringListModel>
#include <QLayout>

RegexCheck::RegexCheck(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	/*
		Disable resize for main window
	*/
	ui.statusBar->setSizeGripEnabled(false);
	this->setFixedSize(this->size());

	/*
		Connect text changes with slot
	*/
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

/*
	Main method, which uses a two strings from text edits in dialog
*/

void RegexCheck::performSearch()
{
	/*
		Get std string from edit text element
	*/
	std::string reg_str		=	ui.inputRegex->text().toStdString();
	std::string srch_str	=	ui.inputText->toPlainText().toStdString();
	
	if (reg_str.empty() || // Check if strings are empty
		srch_str.empty())
	{
		return;
	}

	std::regex testing;

	QStringList		temp_list; // Creating a QStringList to fill it with regex_search results
	QStringListModel *mdl = new QStringListModel; // Creating a model to use it with QListView

	try
	{
		testing.assign(reg_str); // Check if regex string is wrong
	}
	catch (std::exception ex)
	{
		mdl->setStringList(temp_list);

		ui.resultList->setModel(mdl); // Setting empty model
		return;
	}
	
	/*
		Creating a sregex_iterator to find all matches in text
	*/
	std::sregex_iterator begin(srch_str.begin(), srch_str.end(), testing);
	std::sregex_iterator end;
	
	/*
		Adding all matches to QStringList
	*/

	for (; begin != end; ++begin)
	{
		temp_list << QString::fromStdString(((*begin).str()));
	}

	mdl->setStringList(temp_list); // Converting QStringList to model
	ui.resultList->setModel(mdl);  // Setting model from QStringListModel to QListView
}