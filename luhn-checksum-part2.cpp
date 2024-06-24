#include <iostream>

int main()
{
  std::cout << "Enter a number:";
  char digit;

  while(true) {
    digit = std::cin.get();
    std::cout << int(digit) << " ";
  }

  return 0;
}