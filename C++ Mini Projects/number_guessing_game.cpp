#include <iostream>
#include <chrono>
#include <random>

// Function to execute the number guessing game
void startGuessingGame() {
    // Set up modern random number generation instaed of the old version which is ran()
    std::mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count()); 
    std::uniform_int_distribution<int> numberDist(1, 100);

    std::cout << "~~~ Welcome to the Mystic Number Challenge ~~~\n";

    //  A Infinite loop to keep the game running until the user wants to exit
    while(true) {
        int secretNumber = numberDist(rng); // generates the random number 1-100
        int userGuess;
        int remainingTries = 3;

        std::cout << "\nThe Mystic Number lies between 1 and 100...\n";
        std::cout << "You have " << remainingTries << " attempts to unveil its secret!\n";

        while(remainingTries > 0) {
            std::cout << "\nYour guess: ";
            std::cin >> userGuess; // stores users guess

            if(userGuess == secretNumber) {
                std::cout << "\nBravo! You've uncovered the Mystic Number!\n";
                break;
            } 
            else {
                remainingTries--; // decreases the remaining tries by 1
                if(remainingTries > 0) {
                    std::cout << "Nope! " << remainingTries << " tries left.\n";
                } 
                else {
                    std::cout << "The Mystic Number eludes you! It was: " << secretNumber << ".\n";
                }
            }
        }

        char replayChoice;
        std::cout << "\nDare to challenge the Mystic Number again? [Y/N]: "; // Gives user the choice to exit or play again
        std::cin >> replayChoice;

        if(replayChoice == 'N' || replayChoice == 'n') {
            std::cout << "Farewell, and thank you for playing!";
            exit(0); // This will exit the program if the user does not wish to play again
        }
    }
}

int main() {
    startGuessingGame();  // Invoke the guessing game function
    return 0;             // End of the program
}
