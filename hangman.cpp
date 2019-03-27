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
  return guess; // need to validate guess is a single char
}

void compareGuess(std::string guess, std::string targetWord){
  std::size_t found = targetWord.find(guess);
  if(found!=std::string::npos){ // could possibly use recurrision to find multiple positions
    std::cout << "found at: " << found;
  }
}

int main(){
  int lives{ 5 };
  std::string targetWord = getRandomWord();
  std::string guess = getGuess();
  compareGuess(guess, targetWord);
}
