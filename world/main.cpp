#include "custom.h"
#include <iostream>

int main()
{
    /* std::string stuff = "hello there"; */

    std::cout << "hello world" << std::endl;
    std::cout << std::endl;

    echoeStuff("hello there.");
    std::cout << std::endl;

    echoLoop("Hello for you", 5);

    std::printf("hello from a print function");

    return 0;
}
