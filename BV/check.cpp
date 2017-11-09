#include "BV.h"
#include "MyDialog.h"
#include <QApplication>
#include <QWidget>
#include <QDialog>
#include <QDebug>
#include <QtWidgets/QApplication>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core/core.hpp"

/* int mokuai1; 转盘电机
int mokuai2;滴液电机
int mokuai3;温控模块
int mokuai4;拍照模块
*/
//void BV::check(int* m1, int* m2, int* m3, int* m4)
void BV::check()
{
	MyDialog H;
	Ui::MyDialog * pMD = H.getMDAddress();
	if (mokuai1 == 0)
	{
		pMD->label_5->setText("Error");
	}
	else if (mokuai1 == 1)
	{
		pMD->label_5->setText("Normal");
	}
	if (mokuai2 == 0)
	{
		pMD->label_6->setText("Error");
	}
	else if (mokuai2 == 1)
	{
		pMD->label_6->setText("Normal");
	}
	if (mokuai3 == 0)
	{
		pMD->label_7->setText("Error");
	}
	else if (mokuai3 == 1)
	{
		pMD->label_7->setText("Normal");
	}
	if (mokuai4 == 0)
	{
		pMD->label_8->setText("Error");
	}
	else if (mokuai4 == 1)
	{
		pMD->label_8->setText("Normal");
	}
	H.exec();
}