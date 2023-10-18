#include "Keeper.h"
#include <iostream>

int main() {
    Keeper keeper;
    bool isRunning = true;
    int index;
    while (isRunning) {
        std::cout << "1. Add Family member\n";
        std::cout << "2. Delete Family member\n";
        std::cout << "3. Display Family\n";
        std::cout << "4. Redact Family member\n";
        std::cout << "5. Save in file\n";
        std::cout << "6. Load from file\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter your choice: ";
        int choice;
        std::cin >> choice;
        switch (choice) {
        case 1:
            keeper.addFamilyTree();
            break;
        case 2:
            std::cout << "Enter index of Family Tree to delete: ";
            std::cin >> index;
            try {
                keeper.deleteFamilyTree(index);
            }
            catch (Exception& e) {
                std::cout << "\nWrong index\n" << std::endl;
            }
            break;
        case 3:
            keeper.displayFamilyTrees();
            break;
        case 4:
            std::cout << "Enter index of Family Tree to redact: ";
            std::cin >> index;
            if (std::cin.fail())
                break;
            try {
                keeper.redactFamilyTree(index);
            }
            catch (Exception& e) {
                std::cout << "\nWrong index\n" << std::endl;
            }
            break;
        case 5:
            // сохранение
        case 6:
            // загрузка
        case 7:
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
