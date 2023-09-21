#include <iostream>  // For input and output functionality
#include <iomanip>   // For manipulating input and output formats

// Function declarations
void ShowBalance(double balance);             // Shows current account balance
double Deposit();                             // Allows user to deposit money
double Withdraw(double balance);              // Allows user to withdraw money


int main() {
    double balance = 0;  // Initialize balance to 0
    int choice = 0;     // Variable to store user choice in the menu

    // Loop until user chooses to exit
    do {
        // Display menu to user
        std::cout << "\n******************\n";
        std::cout << "Enter your choice:\n";
        std::cout << "********************\n";
        std::cout << "1.Show Balance\n";
        std::cout << "2.Deposit Money\n";
        std::cout << "3.Withdraw Money\n";
        std::cout << "4.Exit\n";
        std::cin >> choice;

        // Clear any errors and flush input stream
        std::cin.clear();
        fflush(stdin);

        // Process user choice
        switch (choice) {
            case 1:
                ShowBalance(balance);
                break;
            case 2:
                balance += Deposit();
                ShowBalance(balance);
                break;
            case 3:
                balance -= Withdraw(balance);
                ShowBalance(balance);
                break;
            case 4:
                std::cout << "Thanks for visiting!!\n";
                break;
            default:
                std::cout << "Invalid Choice!\n";
        }
    } while (choice != 4);  // End loop when user chooses option 4 (Exit)
    
    return 0;
}

// Function definitions

// Displays the current balance with 2 decimal places
void ShowBalance(double balance) {
    std::cout << "Your balance is:£ " << std::setprecision(2) << std::fixed << balance << std::endl;
}

// Prompts user for deposit amount and returns it
double Deposit() {
    double amount = 0;
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if (amount > 0) {
        return amount;
    } 
    else {
        std::cout << "That is not a valid amount:\n ";
        return 0;
    }
}

// Prompts user for withdrawal amount, checks for validity, and returns it
double Withdraw(double balance) {
    double amount = 0;
    std::cout << "Enter amount to be withdrawn:\n";
    std::cin >> amount;

    if (amount > balance) {
        std::cout << "Insufficient funds\n";
        return 0;
    } 
    else if (amount < 0) {
        std::cout << "That's not a valid amount \n ";
        return 0;
    } 
    else {
        return amount;
    }
}
