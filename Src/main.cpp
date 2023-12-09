#include "../Include/MenuManager.h"

/**
 * @file main.cpp
 * @brief Main function for running the MenuManager program.
 */
int main() {
    MenuManager menuManager;
    menuManager.initialSetup();
    menuManager.displayMenuAndHandleChoice();
    return 0;
}