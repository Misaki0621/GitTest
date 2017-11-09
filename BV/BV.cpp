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
double temperature_set;//所维持温度的全局变量
QString FILE_PATH;//检测结果的储存路径

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

	//获取系统现在的时间

	QString str = time.toString("yyyy-MM-dd hh:mm:ss");

	//设置系统时间显示格式

	//ui.label_time11->setText(str); 显示星期需要＋ dddd
	ui.lcdNumber->display(str);//液晶屏显示时间

	//在标签上显示时间

}