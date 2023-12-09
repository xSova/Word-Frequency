//
// Created by Bryce Schultz on 12/6/23.
//

#include "string"
#include "map"

#ifndef PROJECT3_ITEMTRACKER_H
#define PROJECT3_ITEMTRACKER_H

#endif //PROJECT3_ITEMTRACKER_H

class ItemTracker {
private:
    std::map<std::string, int> itemFrequencies;
public:
    /**
 * @brief Adds an item to the itemFrequencies map or increases its frequency if the item is already present.
 *
 * @param item The item to be added.
 * @return None.
 */
    void addItem(const std::string& item);

    /**
 * Retrieve the frequency of a specific item.
 *
 * This function returns the frequency of the given item in the itemFrequencies map.
 *
 * @param item - The item to retrieve the frequency for.
 * @return The frequency of the item.
 * @throw std::out_of_range if the item does not exist in the itemFrequencies map.
 */
    int getItemFrequency(const std::string& item);

    /**
 * @brief Returns a std::map containing the frequencies of all items.
 *
 * This function returns a std::map<std::string, int> object containing the frequencies of all items.
 * The keys of the map represent the items, and the corresponding values represent their frequencies.
 *
 * @return std::map<std::string, int> The map object containing the frequencies of all items.
 *
 * @see ItemTracker::addItem
 * @see ItemTracker::getItemFrequency
 */
    std::map<std::string, int> getAllFrequencies();
};