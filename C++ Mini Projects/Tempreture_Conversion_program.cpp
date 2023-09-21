#include <iostream>

int main() {
    double temp;  // Variable to store the temperature value
    char unit;    // Variable to store the user's choice of unit

    // Display the purpose of the program
    std::cout << "*****Temperature Conversion*****\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What would you like to convert to:";
    std::cin >> unit;  // Get user's choice of unit

    // Check if the user wants to convert to Fahrenheit
    if (unit == 'C' || unit == 'c') {
        std::cout << "Enter the temperature in Celsius:";
        std::cin >> temp;  // Get temperature in Celsius

        // Convert the temperature from Celsius to Fahrenheit
        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is:" << temp << "F\n";  // Display the converted temperature
    }
    // Check if the user wants to convert to Celsius
    else if (unit == 'F' || unit == 'f') {
        std::cout << "Enter the temperature in Fahrenheit:";
        std::cin >> temp;  // Get temperature in Fahrenheit

        // Convert the temperature from Fahrenheit to Celsius
        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is:" << temp << "C\n";  // Display the converted temperature
    }
    // If the user entered something other than C or F
    else {
        std::cout << "Please enter C or F\n";  // Prompt the user to enter a valid unit
    }

    // Display the end of the program
    std::cout << "*******************************";

    return 0;  // End of the program
}
