#include <iostream>

void echoeStuff(std::string stuff)
{
    std::cout << stuff << std::endl;
}

void echoLoop(std::string stuff, int loopCount)
{
    for (int i = 0; i < loopCount; i++) {
        std::cout << stuff << std::endl;
    }
}
