//
// Created by Bryce Schultz on 12/6/23.
//

#include "string"
#include "map"

#ifndef PROJECT3_FILEWRITER_H
#define PROJECT3_FILEWRITER_H

#endif //PROJECT3_FILEWRITER_H

class FileWriter {
public:
    /**
 * @class FileWriter
 *
 * @brief The FileWriter class provides a method to write the content of a given std::map to an output file.
 *
 * The FileWriter class provides a writeOutputFile method that takes a file name and a map of string-int pairs as arguments.
 * It opens the output file specified by the file name and writes each pair in the map to the file in the format "key value".
 * If the file fails to open, an error message is printed to the console and the method returns.
 *
 * Usage:
 * @code
 *    FileWriter writer;
 *    std::map<std::string, int> frequencies;
 *    // populate frequencies map
 *    writer.writeOutputFile("output.txt", frequencies);
 * @endcode
 *
 * @see std::ofstream
 * @see std::map
 */
    static void writeOutputFile(const std::string& fileName, const std::map<std::string, int>& frequencies);
};
