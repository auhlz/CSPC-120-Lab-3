// Alex Labitigan
// CPSC 120-12
// 2022-09-22
// talexlabitigan@csu.fullerton.edu
// @auhlz
//
// Lab 03-02
// Partners: @baraadamer
//
// Convert milliliters to units of the US customary system.
//

#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  double milliliters{};
  double teaspoons{};
  double tablespoons{};
  double ounces{};
  double cups{};

  std::cout << "Enter ml: ";
  std::cin >> milliliters;
  teaspoons = milliliters / 4.929;
  tablespoons = teaspoons / 3;
  ounces = tablespoons / 2;
  cups = ounces / 8;

  std::cout << milliliters << "ml = " << teaspoons << "tsp= " << tablespoons
            << "tbs = " << ounces << "oz = " << cups << "cups" << std::endl;

  return 0;
}