#include <iostream>
#include <filesystem>
#include <fstream>
#include "disc.h"

const std:: string data = "data.bin";
//const std::filesystem::path data = std::filesystem::absolute("data.bin");

void create_file()
{
    std::ifstream file(data, std::ios::binary);
    if(!file.is_open())
    {
        std::ofstream file(data, std::ios::binary);
        {
            std::cerr<<"File is not open." << std::endl;
            exit(1);
        }
        file.close();
    }
    file.close();
}

void save(int buffer [], const int& SIZE)
{
    create_file();
    std::ofstream file(data, std::ios::binary);
    if(!file.is_open())
    {
        std::cerr << "File is not open." << std::endl;
        return;
    }
    file.write((char*)buffer , SIZE*sizeof(buffer[0]));
    file.close();
}

void load(int buffer [], const int& SIZE)
{
    create_file();
    std::ifstream file(data, std::ios::binary);
    if(!file.is_open())
    {
        std::cerr << "File is not open." << std::endl;
    }

    if(file.eof())
        std::cout << "Empty file." << std::endl;
    else
        file.read((char*)buffer , SIZE*sizeof(buffer[0]));
    file.close();
}
