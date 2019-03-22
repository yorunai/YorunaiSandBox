/********************************************************************************
** Form generated from reading UI file 'MVCTest.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MVCTEST_H
#define UI_MVCTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MVCTestClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;

    void setupUi(QMainWindow *MVCTestClass)
    {
        if (MVCTestClass->objectName().isEmpty())
            MVCTestClass->setObjectName(QStringLiteral("MVCTestClass"));
        MVCTestClass->resize(600, 400);
        centralWidget = new QWidget(MVCTestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        MVCTestClass->setCentralWidget(centralWidget);

        retranslateUi(MVCTestClass);

        QMetaObject::connectSlotsByName(MVCTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *MVCTestClass)
    {
        MVCTestClass->setWindowTitle(QApplication::translate("MVCTestClass", "MVCTest", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MVCTestClass: public Ui_MVCTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MVCTEST_H
