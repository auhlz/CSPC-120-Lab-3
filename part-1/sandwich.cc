// Alex Labitigan
// CPSC 120-12
// 2022-09-22
// alexlabitigan@csu.fullerton.edu
// @auhlz
//
// Lab 03-01
// Partners: @baraadamer
//
// Print out a description of a sandwich.
//

#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  std::string protein;
  std::cout << "Enter protein: ";
  std::cin >> protein;

  std::string bread;
  std::cout << "Enter bread: ";
  std::cin >> bread;

  std::string condiment;
  std::cout << "Enter condiment: ";
  std::cin >> condiment;

  std::cout << "A " << protein << " sandwich on " << bread << " with "

            << condiment << "" << std::endl;
  return 0;
}