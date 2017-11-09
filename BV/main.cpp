#include <QApplication>
#include <QWidget>
#include <QDialog>
#include <QDebug>
#include "BV.h"
#include "MyDialog.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	BV w;
	w.show();
	return a.exec();	
}
