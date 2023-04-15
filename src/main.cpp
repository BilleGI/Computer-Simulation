#include <iostream>
#include "ram.h"
#include <string>
#include <algorithm>

const int SIZE(8);

void check(std::string& command)
{
    while(true)
    {
        auto it = std::find_if(command.begin(), command.end(), [] (const char &c)
        {
            return !std::isalpha(c);
        });

        if(it == command.end())
            break;

        std::cout << "Enter the correct command: ";
        std::cin >> command;
    }
}

void registr(std::string& command)
{
    for(int i =0; i < command.size(); i++)
    {
        if(command[i] < 'a' || command[i] > 'z')
            command[i] = tolower(command[i]);
    }
}

int main()
{
    std::string command;
    std::cout << "The program simulates the operation of a computer." << std::endl;
    std::cout << "List of commands:" << std::endl;
    std::cout << "compute - to add numberd in the buffer." << std::endl;
    std::cout << "save - to save numbers on the disk." << std::endl;
    std::cout << "load - to download in ram." << std::endl;
    std::cout << "input - for kayboard input." << std::endl;
    std::cout << "display - to display ub the screen." << std::endl;
    std::cout << "exit - to exit the program." << std::endl;
    do
    {
        std::cout << "Enter the command: ";
        std::cin >> command;
        check(command);
        registr(command);

        instruct(command);

    }while(command != "exit");
    return 0;
}
