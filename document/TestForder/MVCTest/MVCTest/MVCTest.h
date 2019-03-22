#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MVCTest.h"

class MVCTest : public QMainWindow
{
	Q_OBJECT

public:
	MVCTest(QWidget *parent = Q_NULLPTR);

private:
	Ui::MVCTestClass ui;
};
