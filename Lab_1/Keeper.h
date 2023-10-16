#include "FamilyTree.h"

class Keeper {
private:
    int size;
    FamilyTree** familyTreeList;

public:
    Keeper();
    ~Keeper();
    void addFamilyTree();
    void deleteFamilyTree(int index);
    void displayFamilyTrees();
};

class InvalidIndexException : public std::exception {
    const char* what(){
        return "Invalid index entered for FamilyTree deletion.";
    }
};
