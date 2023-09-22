#include <iostream>
#include <string>

// Define a type for convenience
typedef std::string string;

int main() {
    // Array of questions for the quiz
    string questions[] = {"1.Name of creator of destiny 2?:",
                          "2. What year was C++ created?:",
                          "3.Tallest building in the world",
                          "4. IS the earth flat?"};

    // 2D array of potential answers for each question
    string Answers[][4] = {{"A. Activision","B. Blizzard","C. Bungie","D. Rockstar"},
                           {"A. 1969", "B. 1975","C. 1985","D. 1989"},
                           {"A. Burj Khalifa","B. Eiffel Tower","C. Statue of Liberty","D. Big Ben"},
                           {"A. Yes", "B. No","C. sometimes","D. what's Earth?"}};

    // Array of correct answers for the quiz
    char answerKey[] = {'C','C','A','B'};

    // Calculate the number of questions in the quiz
    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;  // Store the user's guess
    int score = 0;  // Store the user's score

    // Loop through each question
    for (int i = 0; i < size; i++) {
        std::cout << "******************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "******************************\n";

        // Display possible answers for the current question
        for (int j = 0; j < sizeof(Answers[i])/sizeof(Answers[i][0]); j++) {
            std::cout << Answers[i][j] << '\n';
        }

        // Get user's answer
        std::cin >> guess;
        guess = toupper(guess);  // Convert the answer to uppercase for consistent comparison

        // Check if the user's answer is correct
        if (guess == answerKey[i]) {
            std::cout << "Correct\n";
            score++;  // Increment the score
        } 
        else {
            std::cout << "Incorrect\n";
            std::cout << "Answer:" << answerKey[i] << '\n';
        }
    }

    // Display user's result
    std::cout << "=====================================\n";
    std::cout << "*              Results               *\n";
    std::cout << "=====================================\n";
    std::cout << "CORRECT GUESSES: " << score << '\n';
    std::cout << "# OF QUESTIONS: " << size << '\n';
    std::cout << "SCORE: " << (score / (double)size) * 100 << "%";  // Calculate the percentage score
    return 0;
}
