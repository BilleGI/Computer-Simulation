#include <iostream>
#include "ram.h"
#include "cpu.h"
#include "disc.h"
#include "gpu.h"
#include "kdb.h"

struct buffer
{
    const int SIZE = 8;
    int buff[8] = {0};
};

buffer mean;

void instruct(std::string command)
{

    if(command == "compute")
    {
        compute(mean.buff, mean.SIZE);
    }

    else if(command == "save")
    {
        save(mean.buff, mean.SIZE);
    }

    else if(command == "load")
    {
        load(mean.buff, mean.SIZE);
    }

    else if(command == "input")
    {
        input(mean.buff, mean.SIZE);
    }

    else if( command == "display")
    {
        display(mean.buff, mean.SIZE);
    }
}
