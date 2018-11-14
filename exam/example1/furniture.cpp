// furniture.cpp
#include <iostream>
#include <string>
#include "furniture.h"

Furniture::Furniture(std::string _name)
{
	name = _name;
}

void Furniture::ReadDimensions()
{
	double _width;
	double _height;
	double _depth;
	std::cout << " Enter width: ";
	std::cin >> _width;
	std::cout << " Enter height: ";
	std::cin >> _height;
	std::cout << " Enter depth: ";
	std::cin >> _depth;

	if (_width > 0 && _height > 0 && _depth > 0)
	{
		width = _width;
		height = _height;
		depth = _depth;
	}
	else
	{
		std::cerr << "Width, Height, and Depth must be ablove 0";
	}
}

void Furniture::Print() {
	std::cout << name << "\n";
        std::cout << " Width = " << width << ", ";
        std::cout << "height = " << height << ", ";
        std::cout << "depth = " << depth << "\n";
}
