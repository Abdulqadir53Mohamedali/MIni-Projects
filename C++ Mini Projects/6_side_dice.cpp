// Include necessary header files
#include <iostream>  // For input and output functions
#include <ctime>     // For time-related functions (used for random number generation)

int main() {
    // Seed the random number generator with the current time to get different results on each run
    srand(time(NULL));

    // Generate a random number between 1 and 6
    int num = (rand() % 6) + 1;

    // Use a switch case to print the result of the dice roll
    switch (num) {
        case 1:
            std::cout << "You rolled a one" << std::endl;
            break;
        case 2:
            std::cout << "You rolled a two" << std::endl;
            break;
        case 3:
            std::cout << "You rolled a three" << std::endl;
            break;
        case 4:
            std::cout << "You rolled a four" << std::endl;
            break;
        case 5:
            std::cout << "You rolled a five" << std::endl;
            break;
        case 6:
            std::cout << "You rolled a six" << std::endl;
            break;
    }

    return 0;  // End of the program
}
