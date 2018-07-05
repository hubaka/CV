#pragma once
//#include <iostream>
//#include <string>

namespace cv {
	class Mat;
}

class sobelFilter
{
public:
   sobelFilter();
   ~sobelFilter();
   int execute(char* inputImgPath, char* outputImgPath);
private:
	int xGradient(cv::Mat img, int rowNo, int colNo);
	int yGradient(cv::Mat img, int rowNo, int colNo);
};

