#include "Keeper.h"

Keeper::Keeper() : size(0), familyTreeList(nullptr) {}

Keeper::~Keeper() {
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
        // Handle exception
        return;
    }
    delete familyTreeList[index];
    for (int i = index; i < size - 1; i++) {
        familyTreeList[i] = familyTreeList[i + 1];
    }
    size--;
}

void Keeper::displayFamilyTrees() {
    for (int i = 0; i < size; i++) {
        familyTreeList[i]->display();
    }
}
