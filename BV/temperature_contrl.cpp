#include "BV.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core/core.hpp"
using namespace cv;

int BV::temperature_control()
{
	ui.pushButtonTemperature->setEnabled(false);//设置按钮处于不可用状态
	//ui.label_heatingtime->setText("Loading");
	double t = (double)cvGetTickCount();//第一次计时
	//温度控制函数，返回值为结束指令“1”,得到指令后在主界面显示温育维持温度
	//全局函数temperature_set用于储存温度
	int end_flag;
	temperature_set = 37.6800;//模拟加热完成后的稳定温度
	end_flag = 1;//模拟加热完成指令
	_sleep(5 * 1000);//延时5秒.此处_sleep是停止运行5s，模拟加热所用时间，会导致界面计时停止5s
	t = (double)cvGetTickCount() - t;
	t = (t / cvGetTickFrequency()) / 1000000;//模拟完成后时间
	QString t_heatingtime = QString::number(t, 10, 4);
	if (end_flag == 1)
	{
		QString temp = QString::number(temperature_set, 10, 4);
		ui.pushButtonTemperature->setEnabled(true);//设置按钮恢复正常
		ui.lcdNumber_temperature->display(temp);
		ui.labeltempCondition->setText("Normal");
		return 1;
	}
	else
	{
		ui.lcdNumber_temperature->display("ERROR!");
		ui.labeltempCondition->setText("ERROR!");
		ui.pushButtonTemperature->setEnabled(true);//这是按钮回复正常
		return 1;
	}

}