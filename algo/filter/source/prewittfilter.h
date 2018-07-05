#pragma once

namespace cv {
	class Mat;
}

class prewittFilter
{
public:
	prewittFilter();
   ~prewittFilter();
   int execute(char* inputImgPath, char* outputImgPath);
private:
	int xGradient(cv::Mat img, int rowNo, int colNo);
	int yGradient(cv::Mat img, int rowNo, int colNo);
};

