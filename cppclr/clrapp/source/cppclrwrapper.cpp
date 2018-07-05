#include "cppclrwrapper.h"
using namespace System::Runtime::InteropServices;

namespace cppclrwrapper
{
	ClrWrapper::ClrWrapper()
   {
      mTweetBankCore = new TweetBankCore();
   }

   int ClrWrapper::tweet()
   {
      int retVal = mTweetBankCore->tweet();
	  return retVal;
   }

   int ClrWrapper::executeSobelFilter(System::String^ inputFilePath, System::String^ ouputFilePath)
   {
	   sobelFilter *filter = new sobelFilter();
	   char* inputstr = (char*)(void*)Marshal::StringToHGlobalAnsi(inputFilePath);
	   char* outputstr = (char*)(void*)Marshal::StringToHGlobalAnsi(ouputFilePath);

	   int retVal = filter->execute(inputstr, outputstr);
	   return 1;
   }
}