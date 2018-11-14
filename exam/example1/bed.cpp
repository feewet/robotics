// bed.cpp
#include <iostream>
#include <string>
#include "bed.h"
#include "furniture.h"

Bed::Bed(std::string _name, std::string _size)
: Furniture(_name)
{
	if (_size == "Full" || _size == "Queen" || _size == "King")
		size = _size;
	else
		std::cerr << "Size must be \"Full\", \"Queen\",  or \"King\"\n";
}

void Bed::Print() 
{
        Furniture::Print();

        std::cout << " " << size << "\n";
}

