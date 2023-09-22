#include <iostream>
#include <chrono>   // For high-resolution clock
#include <random>   // For a better random number generator

int main() {
    // Set up random number generation using modern C++ tools for better randomness instead of rand()
    std::mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count()); 
    std::uniform_int_distribution<int> diceRoll(1, 6);  // Random number between 1 and 6

    // Roll the dice
    int outcome = diceRoll(rng);

    // Print the outcome using an array for a unique twist
    const char* results[] = {
        "You've got a one. Lucky!",
        "Two it is. Nice throw!",
        "Three on the dice! Good job!",
        "It's a four! Keep it up!",
        "You've rolled a five! Almost the max!",
        "Six! Top-notch roll!"
    };

    std::cout << results[outcome - 1] << std::endl;  // Array indexing starts at 0

    return 0;
}
