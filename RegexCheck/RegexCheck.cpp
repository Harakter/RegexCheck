#include "RegexCheck.h"

RegexCheck::RegexCheck(QWidget *parent)
	: QMainWindow(parent)
{
	main_menu = new QMenuBar;
	QAction* action_save = new QAction;
	action_save->setText("Save");

	main_menu->addAction(action_save);
	
	//static_cast<QGridLayout*>(ui.centralWidget->layout())->addWidget(main_menu);

	ui.setupUi(this);

	/*
		Connect text changes with slot
	*/
	connect(ui.inputText
		,	SIGNAL(textChanged())
		,	this
		,	SLOT(performSearch())
		);

	connect(ui.inputRegex
		, SIGNAL(textChanged(QString))
		, this
		, SLOT(performSearch())
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
	catch (QException &ex)
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
			temp_list << QString("\'%1\'").arg(mtch.captured());
		}
	}

	mdl->setStringList(temp_list); // Converting QStringList to model
	ui.resultList->setModel(mdl);  // Setting model from QStringListModel to QListView
}

void RegexCheck::export_file()
{
	QString filename = QFileDialog::getSaveFileName();

	QFile* file = new QFile(filename);
	QTextStream str(file);
	if (!file->open(QFile::WriteOnly | QFile::Text))
	{
		QMessageBox::critical(this, "Error", file->errorString());
	}
	
	QStringList output = static_cast<QStringListModel*>(ui.resultList->model())->stringList();

	foreach(const QString& str_itr, output)
	{
		str << str_itr << '\n';
	}

	file->close();
}

void RegexCheck::on_actionSave_triggered()
{
	export_file();
}
