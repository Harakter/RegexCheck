/********************************************************************************
** Form generated from reading UI file 'RegexCheck.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGEXCHECK_H
#define UI_REGEXCHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegexCheckClass
{
public:
    QAction *actionSave;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_menu;
    QMenuBar *menuBar;
    QMenu *menuExport;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *inputText;
    QListView *resultList;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *inputRegex;

    void setupUi(QMainWindow *RegexCheckClass)
    {
        if (RegexCheckClass->objectName().isEmpty())
            RegexCheckClass->setObjectName(QStringLiteral("RegexCheckClass"));
        RegexCheckClass->resize(811, 681);
        actionSave = new QAction(RegexCheckClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        centralWidget = new QWidget(RegexCheckClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_menu = new QHBoxLayout();
        horizontalLayout_menu->setSpacing(6);
        horizontalLayout_menu->setObjectName(QStringLiteral("horizontalLayout_menu"));
        menuBar = new QMenuBar(centralWidget);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setContextMenuPolicy(Qt::ActionsContextMenu);
        menuExport = new QMenu(menuBar);
        menuExport->setObjectName(QStringLiteral("menuExport"));

        horizontalLayout_menu->addWidget(menuBar);


        gridLayout->addLayout(horizontalLayout_menu, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        inputText = new QTextEdit(centralWidget);
        inputText->setObjectName(QStringLiteral("inputText"));

        horizontalLayout_3->addWidget(inputText);

        resultList = new QListView(centralWidget);
        resultList->setObjectName(QStringLiteral("resultList"));
        resultList->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout_3->addWidget(resultList);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        inputRegex = new QLineEdit(centralWidget);
        inputRegex->setObjectName(QStringLiteral("inputRegex"));

        horizontalLayout->addWidget(inputRegex);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        RegexCheckClass->setCentralWidget(centralWidget);

        menuBar->addAction(menuExport->menuAction());
        menuExport->addAction(actionSave);

        retranslateUi(RegexCheckClass);

        QMetaObject::connectSlotsByName(RegexCheckClass);
    } // setupUi

    void retranslateUi(QMainWindow *RegexCheckClass)
    {
        RegexCheckClass->setWindowTitle(QApplication::translate("RegexCheckClass", "Regex Check", nullptr));
        actionSave->setText(QApplication::translate("RegexCheckClass", "Save ", nullptr));
        menuExport->setTitle(QApplication::translate("RegexCheckClass", "Export", nullptr));
        label_2->setText(QApplication::translate("RegexCheckClass", "Matches:", nullptr));
        label_3->setText(QApplication::translate("RegexCheckClass", "Text:", nullptr));
        label->setText(QApplication::translate("RegexCheckClass", "Expression:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegexCheckClass: public Ui_RegexCheckClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGEXCHECK_H
