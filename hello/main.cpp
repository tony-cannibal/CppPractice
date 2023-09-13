#include <iostream>

int sumNums(int num1, int num2);

int main()
{
    int a = 0;
    float b = 0;

    a = 2 + 3;
    b = float(a) / 2;

    std::cout << "hello world" << std::endl;
    std::cout << a << std::endl;
    std::cout << "the answer is: " << b << std::endl;

    std::cout << sumNums(1, 2) << std::endl;
    std::cout << std::endl;

    if (a == 5) {
        std::cout << "a is equal to 5." << std::endl;
    } else {
        std::cout << "a is not to 5." << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i < a; i++) {
        std::cout << i << std::endl;
    }

    return 0;
}

int sumNums(int num1, int num2)
{
    return num1 + num2;
}
