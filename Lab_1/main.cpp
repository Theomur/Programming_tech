#include "Keeper.h"
#include <iostream>

int main() {
    Keeper keeper;
    bool isRunning = true;
    while (isRunning) {
        std::cout << "1. Add Family member\n";
        std::cout << "2. Delete Family member\n";
        std::cout << "3. Display Family members\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        int choice;
        std::cin >> choice;
        switch (choice) {
        case 1:
            keeper.addFamilyTree();
            break;
        case 2:
            std::cout << "Enter index of Family Tree to delete: ";
            int index;
            std::cin >> index;
            try {
                keeper.deleteFamilyTree(index);
            }
            catch (InvalidIndexException& e) {
                std::cout << e.what() << std::endl;
            }

            break;
        case 3:
            keeper.displayFamilyTrees();
            break;
        case 4:
            isRunning = false;
            break;
        default:
            std::cout << "\n\nInvalid choice\n\n";
        }

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\n\Please ensure you entered a number\n\n";
        }
    }
    return 0;
}
