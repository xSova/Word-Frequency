//
// Created by Bryce Schultz on 12/6/23.
//

#include "string"
#include "ItemTracker.h"

#ifndef PROJECT3_FILEREADER_H
#define PROJECT3_FILEREADER_H

#endif //PROJECT3_FILEREADER_H

class FileReader {
public:
    /**
 * @brief Reads the input file and populates the ItemTracker with the items.
 *
 * @param fileName The name of the input file to read.
 * @param tracker The ItemTracker object to populate with items.
 * @return True if the file was successfully read and items were added to the tracker, false otherwise.
 */
    static bool readInputFile(const std::string& fileName, ItemTracker& tracker);
};