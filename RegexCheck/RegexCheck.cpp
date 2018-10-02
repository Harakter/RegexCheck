#include "RegexCheck.h"
#include <QException>
#include <QStringListModel>
#include <QLayout>

RegexCheck::RegexCheck(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	/*
		Disable resize for main window
	*/
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
	QString reg_str = ui.inputRegex->text();
	QString srch_str = ui.inputText->toPlainText();

	if (reg_str.isEmpty() || // Check if strings are empty
		srch_str.isEmpty())
	{
		return;
	}

	QRegularExpression	testing;
	QStringList			temp_list;						// Creating a QStringList to fill it with regex_search results
	QStringListModel	*mdl = new QStringListModel;	// Creating a model to use it with QListView

	try
	{
		testing.setPattern(reg_str);
	}
	catch (QException ex)
	{
		mdl->setStringList(temp_list);

		ui.resultList->setModel(mdl); // Setting empty model
		return;
	}

	/*
		Creating a QRegularExpressionMatchIterator to find all matches in text
	*/
	QRegularExpressionMatchIterator qrem(testing.globalMatch(srch_str));

	/*
		Adding all matches to QStringList
	*/

	while (qrem.hasNext())
	{
		QRegularExpressionMatch mtch = qrem.next();
		if (mtch.hasMatch())
		{
			temp_list << mtch.captured();
		}
	}

	mdl->setStringList(temp_list); // Converting QStringList to model
	ui.resultList->setModel(mdl);  // Setting model from QStringListModel to QListView
}