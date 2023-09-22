#include <iostream>
#include <iomanip>

// Function prototypes
void displayCurrentBalance(double balance); // Shows the users current accoutn balance 
double addFunds();  // will allow the users to deposit money                       
double takeOutFunds(double balance); // Allows users to withdraw their money      

int main() {
    double currentBalance = 0.0; // initialize balance to 0 
    int userSelection = 0; // variable to store user choice in the menu 

    // Main application loop , Displays meny to user
    do {
        std::cout << "\n==== Bank Menu ====\n";
        std::cout << "1. Display Balance\n";
        std::cout << "2. Add Funds\n";
        std::cout << "3. Take Out Funds\n";
        std::cout << "4. Exit\n";
        std::cout << "===================\n";
        std::cout << "Choose an option: ";
        std::cin >> userSelection;

        std::cin.clear();
        fflush(stdin);  

        //User choice process
        switch (userSelection) {
            case 1:
                displayCurrentBalance(currentBalance);
                break;
            case 2:
                currentBalance += addFunds();
                displayCurrentBalance(currentBalance);
                break;
            case 3:
                currentBalance -= takeOutFunds(currentBalance);
                displayCurrentBalance(currentBalance);
                break;
            case 4:
                std::cout << "Thank you for visiting\n";
                break;
            default:
                std::cout << "Invalid selection, try again.\n";
        }
    } while (userSelection != 4);  // will end the loop when user chooses 4 (exit)
    
    return 0;
}


// Displays the current balance with 2 decimal places
void displayCurrentBalance(double balance) {
    std::cout << "Available balance: £" << std::setprecision(2) << std::fixed << balance << std::endl;
}

// Prompts user for deposit amount and returns it
double addFunds() {
    double deposit = 0.0;
    std::cout << "Input funds to add: ";
    std::cin >> deposit;

    if (deposit > 0) {
        return deposit;
    } 
    else {
        std::cout << "Please enter a valid amount.\n";
        return 0.0;
    }
}

// Prompts user for withdrawal amount, checks for validity, and returns it
double takeOutFunds(double balance) {
    double withdrawal = 0.0;
    std::cout << "Input funds to withdraw: ";
    std::cin >> withdrawal;

    if (withdrawal > balance) {
        std::cout << "Oops! You don't have enough funds.\n";
        return 0.0;
    } 
    else if (withdrawal < 0) {
        std::cout << "Please enter a valid amount.\n";
        return 0.0;
    } 
    else {
        return withdrawal;
    }
}
