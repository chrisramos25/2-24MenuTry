#include <iostream>
#include <cstdlib> //needed for rand
#include <ctime> //need for time()

void playRockPaper() {
    srand(time(0)); //creates sequence of random numbers based on the time of day 
 
    int userChoice = 0;
    int compChoice = rand() % 3 + 1;

    std::cout << "Rock, Paper, Scissors Game\n";
    std::cout << "Choose 1/Rock, 2/Paper, 3/Scissors";
    std::cin  >> userChoice;

    std::cout << "You choose " << userChoice;


    //outputs computers choice
    if (compChoice == 1) {
        std::cout << "Computer Choose " << compChoice;
    }
    if (compChoice == 2) {
        std::cout << "Computer Choose " << compChoice; 
    }
    if (compChoice == 3) {
        std::cout << "Computer Choose " << compChoice;
    }

    //Determine winner
    //Determine tie 
    //Determine win
    //Determine loose
    if (userChoice == compChoice) {
        std::cout << "\nIt was a tie";
    } else if ((userChoice == 1 && compChoice == 3) || 
              (userChoice == 2 && compChoice == 1)  || 
              (userChoice == 3 && compChoice == 2)) {
                std::cout << "\nYou win!";
    } else { 
        std::cout << "\nYou lose!";         
    }
}





