#include "BV.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core/core.hpp"
using namespace cv;

int BV::temperature_control()
{
	ui.pushButtonTemperature->setEnabled(false);//���ð�ť���ڲ�����״̬
	//ui.label_heatingtime->setText("Loading");
	double t = (double)cvGetTickCount();//��һ�μ�ʱ
	//�¶ȿ��ƺ���������ֵΪ����ָ�1��,�õ�ָ�������������ʾ����ά���¶�
	//ȫ�ֺ���temperature_set���ڴ����¶�
	int end_flag;
	temperature_set = 37.6800;//ģ�������ɺ���ȶ��¶�
	end_flag = 1;//ģ��������ָ��
	_sleep(5 * 1000);//��ʱ5��.�˴�_sleep��ֹͣ����5s��ģ���������ʱ�䣬�ᵼ�½����ʱֹͣ5s
	t = (double)cvGetTickCount() - t;
	t = (t / cvGetTickFrequency()) / 1000000;//ģ����ɺ�ʱ��
	QString t_heatingtime = QString::number(t, 10, 4);
	if (end_flag == 1)
	{
		QString temp = QString::number(temperature_set, 10, 4);
		ui.pushButtonTemperature->setEnabled(true);//���ð�ť�ָ�����
		ui.lcdNumber_temperature->display(temp);
		ui.labeltempCondition->setText("Normal");
		return 1;
	}
	else
	{
		ui.lcdNumber_temperature->display("ERROR!");
		ui.labeltempCondition->setText("ERROR!");
		ui.pushButtonTemperature->setEnabled(true);//���ǰ�ť�ظ�����
		return 1;
	}

}