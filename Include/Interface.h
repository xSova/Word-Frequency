//
// Created by Bryce Schultz on 12/6/23.
//

#include "string"
#include "map"

#ifndef PROJECT3_INTERFACE_H
#define PROJECT3_INTERFACE_H

#endif //PROJECT3_INTERFACE_H

class Interface {
public:
    /**
 * @brief Displays the menu options for the user.
 *
 * This function prints out the available options for the user to choose from in the console.
 * The options include searching for an item, displaying all items and their frequencies,
 * displaying a histogram of items, and exiting the program.
 *
 * @note The menu is formatted with a heading and a border for visual clarity.
 *
 * Example usage:
 * @code
 * Interface interface;
 * interface.displayMenu();
 * @endcode
 */
    static void displayMenu();

    /**
 * @brief Displays the frequency of an item.
 *
 * This function displays the frequency of a given item. The frequency is represented by an integer value. If the item appears more than once or not at all, the word "times" is appended
* to the frequency, otherwise the word "time" is appended.
 *
 * @param item The item to display the frequency of.
 * @param frequency The frequency of the item.
 */
    static void displayItemFrequency(const std::string& item, int frequency);

    /**
 * @brief Displays all items with their respective frequencies.
 *
 * This function takes a map of items and their frequencies as input and displays all the items along with their frequencies.
 * The items are displayed in the format: item frequency
 *
 * @param frequencies A map of items and their frequencies.
 */
    static void displayAllItems(const std::map<std::string, int>& frequencies);

    /**
 * @brief Displays a histogram of frequencies for each item in the given map.
 *
 * This function takes a map that contains item frequencies and displays a histogram
 * representation of the frequencies. The output format is as follows:
 *
 * Item1: *****
 * Item2: ************
 * Item3: ***
 * ...
 *
 * The function loops through each item in the map and prints the item name followed by
 * a number of asterisks equal to its frequency.
 *
 * @param frequencies A map that contains item frequencies.
 */
    static void displayHistogram(const std::map<std::string, int>& frequencies);
};