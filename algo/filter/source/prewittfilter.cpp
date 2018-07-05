#include <opencv2/opencv.hpp>
#include "prewittfilter.h"


prewittFilter::prewittFilter()
{
	;
}


prewittFilter::~prewittFilter()
{
}

int prewittFilter::execute(char* inputImgPath, char* outputImgPath)
{
	cv::Mat inputImg, imgClone, outputImg;
	int rowCnt, colCnt, xGrad, yGrad, sum;
	
	// Read the input image
	//inputImg = cv::imread(inputImgPath);
	inputImg = cv::imread(inputImgPath, CV_LOAD_IMAGE_GRAYSCALE);

	if (!inputImg.empty()) {
		// Make a copy of the input image
		outputImg = inputImg.clone();
		for (rowCnt =0; rowCnt < inputImg.rows; rowCnt++)
		{
			for (colCnt =0; colCnt < inputImg.cols; colCnt++)
			{
				outputImg.at<uchar>(rowCnt, colCnt) = 0.0;
			}
		}

		for (rowCnt = 1; rowCnt < inputImg.rows - 1; rowCnt++) {
			for (colCnt = 1; colCnt < inputImg.cols - 1; colCnt++) {
				xGrad = xGradient(inputImg, rowCnt, colCnt);
				yGrad = yGradient(inputImg, rowCnt, colCnt);
				sum = abs(xGrad) + abs(yGrad);
				sum = sum > 255 ? 255 : sum;
				sum = sum < 0 ? 0 : sum;
				outputImg.at<uchar>(rowCnt, colCnt) = sum;
			}
		}
		cv::imwrite(outputImgPath, outputImg);
		return 1;
	}
	else {
		return 0;
	}
}

// Computes the x component of the gradient vector
// at a given point in a image.
// returns gradient in the x direction
int prewittFilter::xGradient(cv::Mat img, int rowNo, int colNo)
{
	int xGrad = img.at<uchar>(rowNo - 1, colNo - 1) +
		img.at<uchar>(rowNo, colNo - 1) +
		img.at<uchar>(rowNo + 1, colNo - 1) -
		img.at<uchar>(rowNo - 1, colNo + 1) -
		img.at<uchar>(rowNo, colNo + 1) -
		img.at<uchar>(rowNo + 1, colNo + 1);
	return xGrad;
}

// Computes the y component of the gradient vector
// at a given point in a image
// returns gradient in the y direction

int prewittFilter::yGradient(cv::Mat img, int rowNo, int colNo)
{
	int yGrad = img.at<uchar>(rowNo - 1, colNo - 1) +
				img.at<uchar>(rowNo - 1, colNo) +
				img.at<uchar>(rowNo - 1, colNo + 1) -
				img.at<uchar>(rowNo + 1, colNo - 1) -
				img.at<uchar>(rowNo + 1, colNo) -
				img.at<uchar>(rowNo + 1, colNo + 1);
	return yGrad;
}