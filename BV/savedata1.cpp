#include "BV.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core/core.hpp"
#include "fstream"
#include "QtCore"
#include "time.h"
#include "ctime"
#include "iostream"
#include "stdlib.h"
#include "qfiledialog.h"

#pragma execution_character_set("utf-8")

using namespace std;
void BV::savedata1()
{
	ofstream ocout;
	//QString data = QFileDialog::getOpenFileName(0, "Open File", "", "*.csv", 0);
	//ocout.open("C:\\Users\\Misaki\\Desktop\\data.csv",ios::app);
	ocout.open((FILE_PATH).toLatin1().data(), ios::app);
	QDateTime time = QDateTime::currentDateTime();

	//获取系统现在的时间

	QString time1 = time.toString("yyyy-MM-dd hh:mm:ss dddd");
	string time1_string = time1.toStdString();
	//模拟检测结果，直接用lineEdit输入储存数据
	QString data1name = ui.lineEditName1_1->text();
	string data1name_string = data1name.toStdString();
	
	QString data1comboBoxSex1 = ui.comboBoxSex1->currentText();
	string data1comboBoxSex1_string = data1comboBoxSex1.toStdString();

	QString data1lineEditPH1 = ui.lineEditPH_1->text();
	string data1lineEditPH1_string = data1lineEditPH1.toStdString();

	QString data1lineEditNAG1 = ui.lineEditNAG_1->text();
	string data1lineEditNAG1_string = data1lineEditNAG1.toStdString();

	QString data1lineEditPLD1 = ui.lineEditPLD_1->text();
	string data1lineEditPLD1_string = data1lineEditPLD1.toStdString();

	QString data1lineEditSIA1 = ui.lineEditSIA_1->text();
	string data1lineEditSIA1_string = data1lineEditSIA1.toStdString();

	QString data1lineEditLE1 = ui.lineEditLE_1->text();
	string data1lineEditLE1_string = data1lineEditLE1.toStdString();

	QString data1lineEditHH1 = ui.lineEditHH_1->text();
	string data1lineEditHH1_string = data1lineEditHH1.toStdString();

	QString data1lineEditNumber1 = ui.lineEditNumber_1->text();
	string data1lineEditNumber1_string = data1lineEditNumber1.toStdString();

	QString data1label1time1 = ui.label_1time->text();
	string data1labeltime1_string = data1label1time1.toStdString();

	ocout << time1_string << "," << data1name_string << "," << data1comboBoxSex1_string << "," << data1lineEditNumber1_string << "," << data1lineEditPH1_string << "," << data1lineEditNAG1_string << "," << data1lineEditPLD1_string << "," << data1lineEditSIA1_string << "," << data1lineEditLE1_string << "," << data1lineEditHH1_string << "," << data1labeltime1_string << endl;
	ocout.close();

	ui.lineEditName1_1->clear();
	ui.lineEditPH_1->clear();
	ui.lineEditNAG_1->clear();
	ui.lineEditPLD_1->clear();
	ui.lineEditSIA_1->clear();
	ui.lineEditLE_1->clear();
	ui.lineEditNumber_1->clear();
	ui.lineEditHH_1->clear();
	ui.label_1time->setText("NULL");
}