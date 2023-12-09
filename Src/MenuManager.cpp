//
// Created by Bryce Schultz on 12/6/23.
//

#include "../Include/MenuManager.h"
#include "iostream"


void MenuManager::initialSetup() {
    // MenuManager.cpp
    bool result;
    do {
        result = FileReader::readInputFile("../Input/CS210_Project_Three_Input_File.txt", tracker);
        if (!result) {
            std::cout << "Unable to open CS210_Project_Three_Input_File.txt. Would you like to retry? (Y/N): ";
            char choice;
            std::cin >> choice;
            if (choice != 'Y' && choice != 'y') {
                std::cerr << "Exiting program due to file read error." << std::endl;
                exit(1); // Exit the program or handle it accordingly
            }
        }
    } while (!result);
    FileWriter::writeOutputFile("frequencies.dat", tracker.getAllFrequencies());
}


[[noreturn]] void MenuManager::displayMenuAndHandleChoice() {
    while (true) {
        Interface::displayMenu();
        int choice = inputHandler.getIntegerInput("Choice: \n");
        handleUserChoice(choice);
    }
}


void MenuManager::handleUserChoice(int choice) {
    switch (choice) {
        case 1:
            handleItemSearch();
            break;
        case 2:
            handleDisplayAllItems();
            break;
        case 3:
            handleDisplayHistogram();
            break;
        case 4:
            handleExit();
            break;
        default:
            handleInvalidOption();
    }
}


void MenuManager::handleItemSearch() {
    wordToSearch = inputHandler.getStringInput("Enter word to count: \n");
    interface.displayItemFrequency(wordToSearch, tracker.getItemFrequency(wordToSearch));
}


void MenuManager::handleDisplayAllItems() {
    interface.displayAllItems(tracker.getAllFrequencies());
}


void MenuManager::handleDisplayHistogram() {
    interface.displayHistogram(tracker.getAllFrequencies());
}


void MenuManager::handleExit() {
    exit(1);
}


void MenuManager::handleInvalidOption() {
    std::cout << "Invalid option. Please try again.\n";
}
