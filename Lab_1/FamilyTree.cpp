#include "FamilyTree.h"
#include <iostream>

FamilyTree::FamilyTree() : name(""), parents(""), spouse(""), children(""), dateOfBirth(""), dateOfDeath(""), age(0) {}

void FamilyTree::input() {
    while (true)
    {
        std::cout << "Enter name: ";
        std::cin >> name;

        std::cout << "Enter parents(enter 0 if they are unknown): ";
        std::cin >> parents;
        if (parents == "0")
            parents = "Unknown";

        std::cout << "Enter spouse (enter 0 if person doesn't have one): ";
        std::cin >> spouse;
        if (spouse == "0")
            spouse = "None";

        std::cout << "Enter children (enter 0 if person doesn't have ones): ";
        std::cin >> children;
        if (children == "0")
            children = "None";

        std::cout << "Enter date of birth: ";
        std::cin >> dateOfBirth;

        std::cout << "Enter date of death (enter 0 if person is alive): ";
        std::cin >> dateOfDeath;
        if (dateOfDeath == "0")
            dateOfDeath = "";

        std::cout << "Enter age: ";
        std::cin >> age;

        break;
    }
}

void FamilyTree::display() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Parents: " << parents << std::endl;
    std::cout << "Spouse: " << spouse << std::endl;
    std::cout << "Childrens: " << children << std::endl;
    std::cout << "Date of Birth: " << dateOfBirth << std::endl;
    std::cout << "Date of Death: " << dateOfDeath << std::endl;
    std::cout << "Age: " << age << std::endl;
}
