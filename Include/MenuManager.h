//
// Created by Bryce Schultz on 12/6/23.
//

#include "InputHandler.h"
#include "FileWriter.h"
#include "FileReader.h"
#include "Interface.h"


#ifndef PROJECT3_MENUMANAGER_H
#define PROJECT3_MENUMANAGER_H

#endif //PROJECT3_MENUMANAGER_H

class MenuManager {
private:
    ItemTracker tracker;
    Interface interface;
    InputHandler inputHandler;
    std::string wordToSearch;
public:
    /**
 * Executes the initial setup for the menu manager.
 * This setup involves reading input from a file, handling any errors, and writing output to a file.
 */
    void initialSetup();

    /**
 * Displays the menu and handles the user's choice.
 *
 * This function continuously displays the menu using the Interface class
 * and prompts the user for their choice. The user's choice is then passed
 * to the handleUserChoice function for further processing.
 *
 * @note This function does not return.
 *
 * @see Interface, handleUserChoice
 */
    [[noreturn]] void displayMenuAndHandleChoice();

    /**
 * @class MenuManager
 * @brief Class for managing the menu and user choices
 *
 * This class is responsible for managing the menu and handling user choices.
 * It provides functions to handle various user choices such as searching for items,
 * displaying all items, displaying item frequency histogram, exiting the program,
 * and handling invalid options.
 */
    void handleUserChoice(int choice);

    /**
 * @brief Handles the item search functionality.
 *
 * This function prompts the user to enter a word to search for. Then it calls
 * the `getStringInput` function of the `inputHandler` object to retrieve the
 * user input. The entered word is stored in the `wordToSearch` member variable.
 *
 * Finally, it calls the `displayItemFrequency` function of the `interface` object,
 * passing in the `wordToSearch` and the frequency of the word obtained from the
 * `getItemFrequency` function of the `tracker` object.
 *
 */
    void handleItemSearch();

    /**
* @brief Handles the action of displaying all items.
*
* This function retrieves all frequencies from the ItemTracker object and
* passes them to the Interface object for display.
*/
    void handleDisplayAllItems();

    /**
 * @brief Handles the action of displaying a histogram of item frequencies.
 *
 * This function calls the `displayHistogram()` function of the `interface` object,
 * passing the result of the `getAllFrequencies()` function of the `tracker` object as the parameter.
 * It displays a histogram of the frequencies of all items.
 *
 * @see Interface::displayHistogram()
 * @see ItemTracker::getAllFrequencies()
 */
    void handleDisplayHistogram();

    /**
 * @brief Handles the exit functionality of the menu.
 *
 * This function is called when the user chooses to exit the menu. It terminates the program by calling the `exit()` function with an exit status of 1.
 */
    void handleExit();

    /**
 * @brief Handles the case when an invalid option is selected by the user.
 *
 * This function prints an error message indicating that the selected option is invalid
 * and prompts the user to try again.
 *
 * @note This function is a member of the MenuManager class.
 *       It does not return any value.
 *
 */
    void handleInvalidOption();
};