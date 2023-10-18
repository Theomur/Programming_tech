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

class Exception : public std::exception {};
