#include <iostream>

#include "src/hi_equals_hi.hpp"


int main() {
  std::cout << str_compare_pp("hi","Hi");
  std::cout << str_compare_pp("String one","string one");
  std::cout << str_compare_pp("String one","string two");
  std::cout << str_compare_pp("String two","string one");
  return 0;
}
