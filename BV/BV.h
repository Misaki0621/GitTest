#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_BV.h"
#include "iostream"
#include <QApplication>
#include <QWidget>
#include <QDialog>
#include <QDebug>

class BV : public QMainWindow
{
	Q_OBJECT

public:
	BV(QWidget *parent = Q_NULLPTR);

private:
	Ui::BVClass ui;
	double temperature_set;
	QString FILE_PATH;
	int mokuai1=1;
	int mokuai2=1;
	int mokuai3=1;
	int mokuai4=1;
/*	
	int* a1 = &mokuai1;
	int* a2 = &mokuai2;
	int* a3 = &mokuai3;
	int* a4 = &mokuai4;
*/
private slots:
int temperature_control();//温度控制
void timeUpDate();//界面时间更新
void savedata1();//储存槽1的数据
void savedataPath();//选择文件存储路径
void check();//模块自检
};