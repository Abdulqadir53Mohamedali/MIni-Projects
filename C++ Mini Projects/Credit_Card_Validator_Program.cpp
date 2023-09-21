#include <iostream>  // For input and output functionality
#include <string>    // For string class

// Alias for std::string for brevity
typedef std::string string;

// Function declarations
int getDigit(const int number);                      // Returns the sum of digits of a number
int sumOfOddDigits(const string cardNumber);         // Calculates and returns the sum of odd-positioned digits from right in a string
int sumEvenDigits(const string cardNumber);          // Calculates and returns the sum of even-positioned digits from right in a string after doubling them

int main() {
    string cardNumber;
    int result = 0;

    // Prompt user for card number
    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber; 

    // Calculate the result for Luhn's Algorithm
    result = sumEvenDigits(cardNumber) + sumOfOddDigits(cardNumber); 

    // Determine and display if card number is valid based on Luhn's Algorithm
    if (result % 10 == 0) {
        std::cout << cardNumber << " is valid ";
    } 
    else {
        std::cout << cardNumber << " is not valid";
    }

    return 0;  // End of program
}

// Returns the sum of the digits of a number (used for numbers < 20 as it's meant for doubled digits)
int getDigit(const int number) {
    return number % 10 + (number/10 % 10);
}

// Calculates and returns the sum of odd-positioned digits from right in a string
int sumOfOddDigits(const string cardNumber) {
    int sum = 0;

    // Loop through odd-positioned characters from the right
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
        sum += cardNumber[i] - '0';
    }

    return sum;
}

// Calculates and returns the sum of even-positioned digits from right in a string after doubling them
int sumEvenDigits(const string cardNumber) {
    int sum = 0;

    // Loop through even-positioned characters from the right
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;  // Missed return statement in the provided code. Added for correctness.
}
