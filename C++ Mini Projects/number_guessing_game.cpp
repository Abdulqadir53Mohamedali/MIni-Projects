#include <iostream>  // For input and output functionality
#include <ctime>     // For time-based random seeding

// Note: With functions, if you declare it above the main function,
// you can actually define the function after the main function.

// This function contains the game logic for a number guessing game.
void game() {
    srand(time(NULL));  // Seed the random generator with the current time

    // Infinite loop to continuously play the game until the user decides to exit
    while(true) {
        int num = (rand() % 100) + 1;   // Generate a random number between 1 and 100 inclusive
        int guess;

        std::cout << "****NUMBER GUESSING GAME**** \n";
        std::cout << "You only have three guesses then the number will change\n";

        // Loop to provide the user with three chances to guess the correct number
        for(int index = 0; index < 3; index++) {
            std::cout << "Please enter your guess:";
            std::cin >> guess;

            // Check if the guess is correct
            if(guess == num) {
                std::cout << "Congratulations! You guessed the number!\n";
                std::cout << "=============\n";

                char choice;

                // Ask the user if they want to play again
                std::cout << "Do you wish to play again? [Y/N]\n";
                std::cin >> choice;

                if(choice == 'Y' || choice == 'y') {
                    break;  // Break out of the for loop to generate a new number and play again
                } 
                else if (choice == 'N' || choice == 'n') {
                    exit(0);  // Exit the program if the user chooses not to play again
                }
            }   else {
                    std::cout << "Incorrect, Please try again\n";
                    std::cout << "==========================\n";
            }
        }
    }
}

// Main function that starts the game
int main() {
    game();  // Call the game function to start the game
    return 0;  // End of program
}
