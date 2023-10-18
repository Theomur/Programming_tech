#include "Base.h"
#include <string>

class FamilyTree : public Base {
private:
    std::string name;
    std::string parents;
    std::string spouse;
    std::string children;
    std::string dateOfBirth;
    std::string dateOfDeath;
    int age;

public:
    FamilyTree();
    ~FamilyTree();
    void input() override;
    void display() override;
    // Getters and Setters for each member variable
};
