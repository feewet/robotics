// table.cpp
#include <iostream>
#include <string>
#include "table.h"
#include "furniture.h"

Table::Table(std::string _name, std::string _woodType) 
: Furniture(_name)
{
	//Furniture(_name);
        if (_woodType == "Pine" || _woodType == "Oak")
                woodType = _woodType;
        else
                std::cerr << "Wood Type must be \"Pine\" or \"Oak\"\n";

}

void Table::Print() {
	Furniture::Print();
	std::cout << " " << woodType << "wood";
}

