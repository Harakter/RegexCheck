/********************************************************************************
** Form generated from reading UI file 'RegexCheck.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGEXCHECK_H
#define UI_REGEXCHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegexCheckClass
{
public:
    QWidget *centralWidget;
    QLineEdit *inputRegex;
    QLabel *label;
    QListView *resultList;
    QLabel *label_2;
    QTextEdit *inputText;
    QLabel *label_3;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RegexCheckClass)
    {
        if (RegexCheckClass->objectName().isEmpty())
            RegexCheckClass->setObjectName(QStringLiteral("RegexCheckClass"));
        RegexCheckClass->resize(594, 328);
        centralWidget = new QWidget(RegexCheckClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        inputRegex = new QLineEdit(centralWidget);
        inputRegex->setObjectName(QStringLiteral("inputRegex"));
        inputRegex->setGeometry(QRect(90, 10, 491, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 71, 16));
        resultList = new QListView(centralWidget);
        resultList->setObjectName(QStringLiteral("resultList"));
        resultList->setGeometry(QRect(320, 60, 261, 231));
        resultList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(320, 40, 71, 16));
        inputText = new QTextEdit(centralWidget);
        inputText->setObjectName(QStringLiteral("inputText"));
        inputText->setGeometry(QRect(10, 60, 301, 231));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 40, 71, 16));
        RegexCheckClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(RegexCheckClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        RegexCheckClass->setStatusBar(statusBar);

        retranslateUi(RegexCheckClass);

        QMetaObject::connectSlotsByName(RegexCheckClass);
    } // setupUi

    void retranslateUi(QMainWindow *RegexCheckClass)
    {
        RegexCheckClass->setWindowTitle(QApplication::translate("RegexCheckClass", "Regex Check", nullptr));
        label->setText(QApplication::translate("RegexCheckClass", "\320\222\321\213\321\200\320\260\320\266\320\265\320\275\320\270\320\265: ", nullptr));
        label_2->setText(QApplication::translate("RegexCheckClass", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        label_3->setText(QApplication::translate("RegexCheckClass", "\320\242\320\265\320\272\321\201\321\202:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegexCheckClass: public Ui_RegexCheckClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGEXCHECK_H