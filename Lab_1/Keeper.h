#include "FamilyTree.h"

class Keeper {
private:
    int size;
    FamilyTree** familyTreeList;

public:
    Keeper();
    ~Keeper();
    void addFamilyMember();
    void deleteFamilyMember(int index);
    void displayFamilyTree();
    void redactFamilyMember(int index);
    void saveToFile();
    void restoreFromFile();
};

class Exception : public std::exception {};
