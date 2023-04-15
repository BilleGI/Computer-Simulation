#include <iostream>
#include "kdb.h"

void input(int buffer [], const int& SIZE)
{
    std::cout << "Fill in the buffer: " << std::endl;
    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << i << " buffer element: ";
        std::cin >> buffer[i];
    }
}
