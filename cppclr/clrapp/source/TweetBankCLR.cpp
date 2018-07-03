#include "TweetBankCLR.h"

namespace TweetBank
{
   TweetBankCLR::TweetBankCLR()
   {
      mTweetBankCore = new TweetBankCore();
   }

   int TweetBankCLR::tweet()
   {
      int retVal = mTweetBankCore->tweet();
	  return retVal;
   }
}