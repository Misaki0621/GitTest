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
int temperature_control();//�¶ȿ���
void timeUpDate();//����ʱ�����
void savedata1();//�����1������
void savedataPath();//ѡ���ļ��洢·��
void check();//ģ���Լ�
};