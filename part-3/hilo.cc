// Alex Labitigan
// CPSC 120-12
// 2022-09-22
// alexlabitigan@csu.fullerton.edu
// @auhlz
//
// Lab 03-03
// Partners: @baraadamer
//
// Play a hi/lo guessing game.
//

#include <iostream>
int main(int argc, char const *argv[]) {
  int secret_number;
  std::cout << "Player 1, enter the secret number: ";
  std::cin >> secret_number;
  int guess1;
  std::cout << "Player 2, enter your first guess: ";
  std::cin >> guess1;

  if (guess1 > secret_number) {
    std::cout << "Too high\n";
  } else if (guess1 < secret_number) {
    std::cout << "Too low\n";
  } else if (guess1 == secret_number) {
    std::cout << "Correct, you win!\n";
    return 0;
  }
  int guess2;
  std::cout << "Player 2, enter your second guess: ";
  std::cin >> guess2;
  if (guess2 > secret_number) {
    std::cout << "Too high" << std::endl;
  } else if (guess2 < secret_number) {
    std::cout << "Too low\n";
  } else if (guess2 == secret_number) {
    std::cout << "Correct, you win!";
    return 0;
  }
  std::cout << "Incorrect the secret number was " << secret_number
            << ", you lose!\n";
  return 0;
}
