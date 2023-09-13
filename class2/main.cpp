#include "person.h"
#include <iostream>

int main(int argc, char* argv[])
{
    Person John("Jonathan", 26);
    std::cout << John.GetName() << std::endl;
    std::cout << John.GetAge() << std::endl;
    John.ToString();
    return 0;
}
