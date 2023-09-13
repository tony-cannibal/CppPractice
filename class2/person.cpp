#include "person.h"
#include <iostream>

Person::Person(std::string name, int age)
{
    this->name = name;
    this->age = age;
}

void Person::ToString()
{
    std::cout << this->name << " is " << this->age << " years old.\n";
}
