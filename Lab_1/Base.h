class Base {
public:
    std::string name;
    std::string mother;
    std::string father;
    std::string spouces;
    std::string childrens;
    std::string dateOfBirth;
    std::string dateOfDeath;

    virtual void input() = 0;
    virtual void display() = 0;
};
