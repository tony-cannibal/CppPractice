#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    std::string GetName() { return name; }
    int GetAge() { return age; }

    Person(std::string, int);
    void ToString();
};
