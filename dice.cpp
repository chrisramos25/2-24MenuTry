#include <iostream>
#include <string>
#include <vector>
#include "dice.h"

void playDicegame () {

    //initizlize the word
    std::string word = "LoneStar";
    std::string guessedWord(word.length(), '_'); //finds length of word and outputs underscores for each letter
    std::vector<char> wrongGuesses;
    int maxAttempts = 6;
    int attempts = 0;
    char guess; 



    std::cout << "=== Welcome to Guess the Word Game ===\n";
    std::cout << "Try to guess the word, one letter at a time!\n\n";





}