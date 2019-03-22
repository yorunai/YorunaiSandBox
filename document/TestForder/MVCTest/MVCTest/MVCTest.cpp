#include "MVCTest.h"
#include "ModelTestCl.h"

MVCTest::MVCTest(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	ModelTestCl *mdl =new ModelTestCl(0);
	
	ui.tableView->setModel(mdl);
	
}
