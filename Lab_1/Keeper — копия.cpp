#include "Keeper.h"
#include <iostream>

Keeper::Keeper() : size(0), familyTreeList(nullptr) {
    std::cout << "Keeper constructor called\n";
}

Keeper::~Keeper() {
    std::cout << "Keeper destructor called\n";

    for (int i = 0; i < size; i++) {
        delete familyTreeList[i];
    }
    delete[] familyTreeList;
}

class EmptyFamilyException : public std::exception {
    const char* what() const throw() {
        return "You cant delete member from unexisting family";
    }
};

void Keeper::addFamilyTree() {
    FamilyTree* newFamilyTree = new FamilyTree();
    newFamilyTree->input();
    FamilyTree** newFamilyTreeList = new FamilyTree * [size + 1];
    for (int i = 0; i < size; i++) {
        newFamilyTreeList[i] = familyTreeList[i];
    }
    newFamilyTreeList[size] = newFamilyTree;
    delete[] familyTreeList;
    familyTreeList = newFamilyTreeList;
    size++;
}

void Keeper::deleteFamilyTree(int index) {
    if (index < 0 || index >= size) {
        throw Exception();
    }

    delete familyTreeList[index];
    for (int i = index; i < size - 1; i++) {
        familyTreeList[i] = familyTreeList[i + 1];
    }
    size--;
}

void Keeper::displayFamilyTrees() {
    for (int i = 0; i < size; i++) {
        std::cout << "\nIndex: " << i << "\n" << std::endl;
        familyTreeList[i]->display();
    }
    std::cout << "\n" << std::endl;
}
