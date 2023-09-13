#include <iostream>
#include <string>

class Person {
    // private:
    std::string name;
    int age;

public:
    std::string GetName() { return name; }
    int GetAge() { return age; }
    // void SetAll(std::string, int);
    Person(std::string, int);
    Person();
    ~Person();
    void ToString();
};

// void Person::SetAll(std::string name, int age)
// {
//     this->name = name;
//     this->age = age;
// }

Person::Person(std::string name, int age)
{
    this->name = name;
    this->age = age;
}

Person::Person()
{
    this->name = "";
    this->age = 0;
}

Person::~Person()
{
    std::cout << "The person ";
    std::cout << this->name;
    std::cout << " was deleted" << std::endl;
}

void Person::ToString()
{
    std::cout << this->name;
    std::cout << " is ";
    std::cout << this->age;
    std::cout << " years old.\n";
}

int main()
{
    Person john("john", 24);

    std::cout << john.GetName() << std::endl;
    std::cout << john.GetAge() << std::endl;

    john.ToString();

    std::cout << std::endl;

    std::cout << "this program works\n";

    return 0;
}
