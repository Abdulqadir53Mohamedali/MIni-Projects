#include<iostream>  // For input and output functionality

// Alias for std::string for brevity
typedef std::string string;

int main() {
    char choice;              // Variable to store arithmetic operation choice
    double num1, num2;        // Variables to store numbers for calculation
    double result;            // Variable to store the result of the calculation
    string spacing = "==================================================";      // Decorative line for separating sections
    string Title_spacing = "==========";   // Decorative line for title spacing

    // Infinite loop to continuously use the calculator
    while (true) {
        // Display calculator title
        std::cout << '\n' << Title_spacing << '\n';
        std::cout << "CALCULATOR" << '\n';
        std::cout << Title_spacing << '\n';

        // Get the first number from the user
        std::cout << "Please enter the first number of the calculation:" ;
        std::cin >> num1;
        std::cout << spacing << '\n';

        // Get the second number from the user
        std::cout << "Please enter the second number of the calculation:" ;
        std::cin >> num2;
        std::cout << spacing << '\n';

        // Get the operation choice from the user
        std::cout << "Would you like to do a +,-,/,* calculation:" ;
        std::cin >> choice;
        std::cout << spacing << '\n';

        // Switch case to determine which operation to perform and display the result
        switch(choice) {
            case '+':
                result = num1 + num2;
                std::cout <<"Answer:" << result;
                break;
            case '-':
                result = num1 - num2;
                std::cout << "Answer:" << result;
                break;
            case '*':
                result = num1 * num2;
                std::cout << "Answer:" << result;
                break;
            case '/':
                result = num1 / num2;
                std::cout << "Answer:" << result;
                break;
            default:
                // If the user enters an invalid choice
                std::cout << "Invalid choice entered";
        }
    }

    // End of the program
    return 0;
}
