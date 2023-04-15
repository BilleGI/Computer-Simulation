#include <iostream>
#include "cpu.h"

void compute(int buffer [], const int& SIZE)
{
    int summ = 0;
    for(int i =0; i < SIZE; i++)
        summ += buffer[i];

    std::cout << "summ = " << summ << std::endl;
}
