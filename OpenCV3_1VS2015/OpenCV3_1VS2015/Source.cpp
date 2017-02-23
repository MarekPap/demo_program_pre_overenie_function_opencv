#include <opencv\cv.h>
#include <opencv\highgui.h>
#include <opencv2\imgcodecs.hpp>
#include <opencv2\highgui.hpp>
#include <opencv2\imgproc.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <stdio.h>

using namespace cv;

int main(int argc, char** argv)
{
	char* imageName = argv[1];

	Mat img = imread("c://opencv//foto//obr1.jpg");  //nacitanie obrazku
	Mat gray_image;
	cvtColor(img, gray_image, CV_BGR2GRAY);   // modifikovanie na sedu farbu 

	imwrite("c://opencv//foto//obr1_gray.jpg", gray_image);  // ulozenie obrazku

	namedWindow(imageName, CV_WINDOW_AUTOSIZE);
	namedWindow("Gray image", CV_WINDOW_AUTOSIZE);

	imshow(imageName, img);  //zobrazenie original picture
	imshow("Gray image", gray_image); // zobrazenie modifikovaneho picture

	waitKey(0);
}