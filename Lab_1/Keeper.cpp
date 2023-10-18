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

void Keeper::redactFamilyTree(int index) {
    if (index < 0 || index >= size) {
        throw Exception();
    }

    FamilyTree* newFamilyTree = new FamilyTree();
    newFamilyTree->input();
    FamilyTree** newFamilyTreeList = new FamilyTree * [size];
    for (int i = 0; i < size; i++) {
        if (i != index)
            newFamilyTreeList[i] = familyTreeList[i];
        else
            newFamilyTreeList[i] = newFamilyTree;
    }
    newFamilyTreeList[index] = newFamilyTree;
    delete[] familyTreeList;
    familyTreeList = newFamilyTreeList;
}