//
// Created by Bryce Schultz on 12/6/23.
//

#include "string"

#ifndef PROJECT3_INPUTHANDLER_H
#define PROJECT3_INPUTHANDLER_H

#endif //PROJECT3_INPUTHANDLER_H

class InputHandler {
public:
    /**
 * @brief Gets a string input from the user with the given prompt.
 * @param prompt The prompt to display to the user.
 * @return The string input from the user.
 * @details This function repeatedly prompts the user for a string input until a valid input is provided.
 *          Invalid inputs are cleared and ignored, and an error message is displayed to the user.
 */
    static std::string getStringInput(const std::string& prompt);

    /**
 * @brief Gets integer input from the user.
 *
 * This function prompts the user with the given prompt and waits for
 * the user to enter a valid integer value. If the user enters an invalid
 * input, an error message is displayed and the user is prompted again.
 *
 * @param prompt The prompt message to display to the user.
 * @return The integer value entered by the user.
 */
    static int getIntegerInput(const std::string& prompt);
};