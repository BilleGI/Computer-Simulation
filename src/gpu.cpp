#include <iostream>
#include "gpu.h"

void display(int buffer [], const int& SIZE)
{
    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << buffer[i] << " ";
    }
    std::cout << std::endl;
}
