#include <iostream>
#include <opencv2/opencv.hpp>
#include "TweetBankCore.h"


TweetBankCore::TweetBankCore()
{
	m_var = 0;
}


TweetBankCore::~TweetBankCore()
{
}

int TweetBankCore::tweet()
{
	//printf("Hello world\n");
	// Read an image
	// (in Brown, use “C:/sw/opencv/sources/samples/data/lena.jpg”)
	cv::Mat image = cv::imread("E:/gitClone/CV/testimages/dolores.jpg");
	if (image.empty()) {
		std::cout << "Hey! Can't read the image!" << std::endl;
		system("PAUSE");
		return 0;
	}
	// Create image window named "My Image". (You actually don't have to do
	// this step, but this command allows you to set properties of the window,
	// such as its location, or whether you can resize it.)
	cv::namedWindow("My Image");
	// Show the image in the window
	cv::imshow("My Image", image);
	// Wait for 5000 ms (0 means wait until a keypress)
	cv::waitKey(5000);
	return 1;
}