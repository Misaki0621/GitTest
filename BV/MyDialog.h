#pragma once

#include <QDialog>
#include "ui_MyDialog.h"

class MyDialog : public QDialog
{
	Q_OBJECT

public:
	MyDialog(QWidget *parent = Q_NULLPTR);
	~MyDialog();
	Ui::MyDialog* getMDAddress(){ Ui::MyDialog* ptrMD = &MD; return ptrMD; }
	int mokuai1;
	int mokuai2;
	int mokuai3;
	int mokuai4;

private:
	Ui::MyDialog MD;
	
};
