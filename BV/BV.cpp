#include "BV.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core/core.hpp"
#include "QtCore"
#include "time.h"
#include "ctime"
#include "iostream"

#pragma execution_character_set("utf-8")
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
using namespace cv;
double temperature_set;//��ά���¶ȵ�ȫ�ֱ���
QString FILE_PATH;//������Ĵ���·��

BV::BV(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.action, SIGNAL(triggered()), this, SLOT(check()));
	connect(ui.action2, SIGNAL(triggered()), this, SLOT(savedataPath()));
	connect(ui.pushButtonTemperature, SIGNAL(clicked()), this, SLOT(temperature_control()));
	connect(ui.saveButton1, SIGNAL(clicked()), this, SLOT(savedata1()));
	void nowtime();
	QTimer *timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(timeUpDate()));
	timer->start(1000);

}
void BV::timeUpDate()

{

	QDateTime time = QDateTime::currentDateTime();

	//��ȡϵͳ���ڵ�ʱ��

	QString str = time.toString("yyyy-MM-dd hh:mm:ss");

	//����ϵͳʱ����ʾ��ʽ

	//ui.label_time11->setText(str); ��ʾ������Ҫ�� dddd
	ui.lcdNumber->display(str);//Һ������ʾʱ��

	//�ڱ�ǩ����ʾʱ��

}