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
            keeper.deleteFamilyTree(index);
            break;
        case 3:
            keeper.displayFamilyTrees();
            break;
        case 4:
            isRunning = false;
            break;
        default:
            std::cout << "Invalid choice\n";
        }
    }
    return 0;
}
