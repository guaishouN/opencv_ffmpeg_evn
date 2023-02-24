#include <iostream>
#include <opencv2/opencv.hpp>

extern "C" {
    #include "libavutil/log.h"
}

using namespace std;
using namespace cv;


int main() {
    av_log_set_level(AV_LOG_DEBUG);
    av_log(NULL,AV_LOG_INFO,"HELLO");
    cout << "OpenCV_Version: " << CV_VERSION << endl;
    //读取本地的一张图片便显示出来
    Mat img = imread("D:\\Projects\\CLionProjects\\test.jpg");  //图片目录的输入要特别小心，建议将原来的斜杠“\”换成反斜杠“/”
    imshow("picture", img);
    //等待用户按键
    waitKey(0);
    return 0;
}
