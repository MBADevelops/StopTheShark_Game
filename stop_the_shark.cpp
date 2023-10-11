#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

int main() {
    // User experience matters. I start the game by displaying a welcoming message.
    std::cout << "Welcome to Stop The Shark!" << std::endl;

    // I chose words that align with the theme for immersion.
    std::vector<std::string> wordList = {"shark", "ocean", "beach", "sand", "wave"};

    // A progression of visual cues, increasing urgency with each wrong guess.
    // This helps in creating a dynamic user experience.
    const std::vector<std::string> sharkProgression = {
        "______\n",
        "DANGER\n",
        "DANGER, ___ ____\n",
        "DANGER, THE ____\n",
        "DANGER, THE SHARK ___ ____\n",
        "DANGER, THE SHARK IS ____\n",
        "DANGER, THE SHARK IS HERE!!!\n"
    };

    // I decided to implement a replay loop to enhance the game's replayability.
    char playAgain = 'y';
    while (playAgain == 'y') { 

        // Seeding RNG for genuine randomness in word selection each session.
        std::srand(static_cast<unsigned>(std::time(nullptr)));

        // Employed the modulo operator for a uniform distribution within wordList's bounds.
        std::string chosenWord = wordList[std::rand() % wordList.size()];

        // Initialized the guessedWord to all underscores as a placeholder.
        std::string guessedWord(chosenWord.size(), '_');

        // Counter logic to track wrong guesses and create tension.
        int wrongTries = 0;
        const int maxTries = 7;

        // Main game loop - either the word is guessed or the player runs out of tries.
        while (wrongTries < maxTries && guessedWord != chosenWord) {
            std::cout << "Current word: " << guessedWord << std::endl;
            std::cout << sharkProgression[wrongTries] << std::endl;

            // Interaction point: accepting user's guess.
            char guess;
            std::cout << "Guess a letter: ";
            std::cin >> guess;

            // Linear search to check for the presence of the guessed letter.
            bool isCorrect = false;
            for (size_t i = 0; i < chosenWord.size(); i++) {
                if (chosenWord[i] == guess) {
                    guessedWord[i] = guess;
                    isCorrect = true;
                }
            }

            // Feedback mechanism for incorrect guesses.
            if (!isCorrect) {
                wrongTries++;
                std::cout << "Incorrect! The shark is getting closer!" << std::endl;
            }
        }

        // Post-game feedback depending on the game's outcome.
        if (guessedWord == chosenWord) {
            std::cout << "Congratulations! You stopped the shark and saved the beach!" << std::endl;
        } else if (wrongTries == maxTries) {
            std::cout << "Oh no! The shark reached the beach. Better luck next time." << std::endl;
            std::cout << "The correct word was: " << chosenWord << std::endl;
        }

        // Seamless replay option, improving user retention.
        std::cout << "Would you like to play again? (y/n): ";
        std::cin >> playAgain;
    }

    // Lastly, I implemented a farewell message for a complete user experience.
    std::cout << "Thanks for playing!" << std::endl;

    return 0;
}
