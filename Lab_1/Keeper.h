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
    void redactFamilyTree(int index);
};

class Exception : public std::exception {};
