#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	Mat src1, src2, src3;

	src1 = imread("F:/image/test.png", 0);
	imshow("原图", src1);

	src1.convertTo(src2, CV_16U);
	imshow("格式转换图", src2);

	src2.convertTo(src3, CV_16U, 55);//255最黑的
	imshow("格式转换系数修正图", src3);

	waitKey(0);
	destroyAllWindows();
	return 0;
}