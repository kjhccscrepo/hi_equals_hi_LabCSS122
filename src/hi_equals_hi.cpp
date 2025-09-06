#include <string>
#include <sstream>

std::string hello() {
   return "Hello World!";
}
std::string FFmyStringToLower(std::string inputString) {
   std::stringstream ss;
   char c;
   for (int i = 0; i < inputString.size(); i++) {
      c = inputString.at(i);
      if (isupper(c)) {
         c = tolower(c);
      }
      ss << c;
   }
   return ss.str();
}

int WhatAreMyStrings(std::string strX, std::string strY) {
   std::string A = FFmyStringToLower(strX);
   std::string B = FFmyStringToLower(strY);
   if (A == B) {
      return 0;
   } else if (A > B) {
      return 1;
   } else if (A < B) {
      return -1;
   }
   // In theory this line should never fire, but if it does it has a return value so I know that it happened.
   return 2;
}

//this function pretty prints a message about how the strings compare.
std::string str_compare_pp(std::string strA, std::string strB) {
   int compareInt = 0;
   std::stringstream ss;
   ss << "The comparison of ''" << strA << "\" and ''" << strB << "'' returns ";
   compareInt = WhatAreMyStrings(strA, strB);
   ss << compareInt << ".\n";
   return ss.str();
}





