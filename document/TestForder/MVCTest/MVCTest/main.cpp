#include "MVCTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MVCTest w;
	w.show();
	return a.exec();
}
