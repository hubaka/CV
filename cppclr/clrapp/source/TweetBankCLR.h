#pragma once
#include "TweetBankCore.h"

namespace TweetBank
{
   public ref class TweetBankCLR
   {
   public:
      TweetBankCLR();
      int tweet();
   private:
      TweetBankCore* mTweetBankCore;
   };

}

