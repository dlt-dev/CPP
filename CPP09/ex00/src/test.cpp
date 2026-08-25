

#include <iostream>
#include <stack>
#include <string>
#include <exception>
#include <cctype>
#include <stdint.h>

#include <limits>
#include <cstdlib>

#include <cstddef>

#include <sstream>
#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{

    if (ac != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }


    std::string filename = av[1];
    std::ifstream infile(filename.c_str());


    if (!infile.is_open())
        throw std::runtime_error("could not open file ... ");

    std::string line;

    
    

    std::getline(infile, line); // skip la premiere ligne
    while (std::getline(infile, line))
    {
        std::cout << line << std::endl;
        // inserer dans la map
        // _price.insert(std:make_pair(date, rate)) aussi possible
       // _price[date] = rate;
    }
}




    // std::string str = av[1];
    // int nb;
    // char c;
    // std::string str2;
    // std::istringstream iss(str);
    // if(iss.good() == true)
    //     std::cout << " good flux" << std::endl;
    // iss >> nb;
    // if(iss.fail() == true)
    //     std::cout << " failbit flag up" << std::endl;
    // if(iss.good() == false)
    //     std::cout << " arghh !!!" << std::endl;
    // iss.clear();
    // iss >> c;
    // iss >> str2;
    // std::cout << nb << std::endl;
    //  std::cout << c << std::endl;
    //   std::cout << str2 << std::endl;
