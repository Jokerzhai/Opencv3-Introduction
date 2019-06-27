#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highhui/highgui.hpp"
#include <iostream>

using namespace cv;
using namespace std;

#define WINDOW_NAME "【程序窗口】"      //为窗口标题定义的宏

//全局变量的声明

int g_nThresholdValue = 100;
int g_nThresholdType = 3;
Mat g_srcImage,g_grayImage,g_dstImage;

static void ShowHelpText();     //输出帮助文字
void on_Threshold(int,void* )   //回调函数

int main()
{
    //读入源图片
    g_srcImage = imread("1.jpg");
    if(!g_srcImage.data){printf ("读取图片错误，请确定目录下是否有imread函数指定的图片存在~！ \n"); return false;}

    //存留一份原图的灰度图
    cvtColor(g_srcImage,g_grayImage,COLOR_RGB2GRAY);

    //创建窗口并显示原始图
    namedWindow(WINDOW_NAME,WINDOW_AUTOSIZE);
    //创建滑动条来控制阈值
    createTrackbar();
    createTrackbar();
    //



}



