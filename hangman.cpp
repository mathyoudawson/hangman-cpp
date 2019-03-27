#include <iostream>
#include <string>
#include <stdlib.h>

std::string getRandomWord(){
  std::string dictionary [10] = { "pear", "elephant", "bicycle", "computer", "owl", "agile", "biscuit", "booklet" };
  int randIndex = rand() % 10;
  return dictionary[randIndex];
}

std::string getGuess(){
  std::cout << "Enter your guess" << '\n';
  std::string guess;
  std::cin >> guess;
  return guess;
}

int main(){
  int lives{ 5 };
  std::string guess = getGuess();
}
