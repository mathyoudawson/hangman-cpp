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

std::size_t findIndexOfGuess(std::string guess, std::string targetWord){
  return targetWord.find(guess);
}

int main(){
  int lives{ 5 };
  std::string targetWord = getRandomWord();
  std::string guess = getGuess();
  std::size_t guessIndex = findIndexOfGuess(guess, targetWord);
  if(guessIndex != std::string::npos){
    std::cout << "found at: " << guessIndex; 
  }
  else{
    std::cout << "bad guess" << std::endl;
  }
}
