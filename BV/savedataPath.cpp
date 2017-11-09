#include "BV.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core/core.hpp"
#include "fstream"
#include "QtCore"
#include "time.h"
#include "qfiledialog.h"

#pragma execution_character_set("utf-8")
#define _CRT_SECURE_NO_WARNINGS

using namespace std;
void BV::savedataPath()
{
	QString data = QFileDialog::getOpenFileName(0, "Open File", "", "*.csv", 0);
	FILE_PATH = (data);
	ui.filepath->setText(FILE_PATH.toLatin1().data());
}