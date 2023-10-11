# Stop The Shark: A C++ Terminal-Based Word-Guessing Game

**Stop The Shark** is an intricate terminal game, architectured using C++, that adapts the traditional hangman game's mechanics with a thematic twist. The core logic intricately interweaves string manipulation, loop constructs, and random number generation to offer an engaging gameplay experience.

## Overview:

Players are tasked with deciphering a beach-themed word, represented initially by underscores. Each incorrect guess intensifies the game's narrative—indicating the shark's progression towards the beach. The culmination occurs when the player either successfully discerns the word or the shark metaphorically reaches the beach.

## Key Technical Features:

- **Dynamic Word Selection**: The game employs the C++ Standard Library's pseudo-random number generation facilities, seeded with the current time, ensuring diverse word selection across multiple sessions.

- **String Manipulation**: At its core, the game heavily leverages C++ string manipulation capabilities to dynamically update and display the current game state based on player input.

- **Loop Constructs**: The game flow is regulated through nested loop constructs, ensuring fluid progression and intuitive replayability.

- **Encapsulation**: Game data, like the beach-themed words and shark progression messages, is stored within STL containers, promoting modular and maintainable code structure.

## Compilation and Execution:

1. **Prerequisites**: Ensure your system is equipped with a C++11 compliant compiler. The game has been developed and tested using `g++`.

2. **Compilation**:
   To transform the source code into an executable, use the following command:
   ```
   g++ -std=c++11 stop_the_shark.cpp -o stop_the_shark
   ```

3. **Execution**:
   After successful compilation, the game can be initiated by executing the following command in the terminal:
   ```
   ./stop_the_shark
   ```

## Future Improvements:

- **Difficulty Levels**: Introduce various difficulty tiers that adjust the number of tries or the complexity of the words.

- **Graphical Interface**: Transition from a terminal-based interface to a more visually engaging graphical user interface (GUI).

- **Themed Word Packs**: Allow players to choose different themes beyond just the beach, such as forest, cityscape, or space.

- **Multiplayer Mode**: Implement a two-player mode where one player chooses the word and the other player guesses.

- **Hint System**: Incorporate a hint mechanism where players can sacrifice a turn to get a clue related to the word.
 
