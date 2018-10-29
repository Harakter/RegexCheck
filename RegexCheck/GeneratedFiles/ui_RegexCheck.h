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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegexCheckClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *inputRegex;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *inputText;
    QListView *resultList;

    void setupUi(QMainWindow *RegexCheckClass)
    {
        if (RegexCheckClass->objectName().isEmpty())
            RegexCheckClass->setObjectName(QStringLiteral("RegexCheckClass"));
        RegexCheckClass->resize(905, 709);
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
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        inputRegex = new QLineEdit(centralWidget);
        inputRegex->setObjectName(QStringLiteral("inputRegex"));

        horizontalLayout->addWidget(inputRegex);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

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


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        RegexCheckClass->setCentralWidget(centralWidget);

        retranslateUi(RegexCheckClass);

        QMetaObject::connectSlotsByName(RegexCheckClass);
    } // setupUi

    void retranslateUi(QMainWindow *RegexCheckClass)
    {
        RegexCheckClass->setWindowTitle(QApplication::translate("RegexCheckClass", "Regex Check", nullptr));
        label->setText(QApplication::translate("RegexCheckClass", "Expression:", nullptr));
        label_2->setText(QApplication::translate("RegexCheckClass", "Matches:", nullptr));
        label_3->setText(QApplication::translate("RegexCheckClass", "Text:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegexCheckClass: public Ui_RegexCheckClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGEXCHECK_H
