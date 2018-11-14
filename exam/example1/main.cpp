// main.cpp
#include <iostream>
#include <string>
using std::string;
#include "furniture.h"
#include "table.h"
#include "bed.h"

int main()
{	
	string tableName;
	string tableWoodType;
	string bedName;
	string bedSize;

	std::cout << "Creating table...\n";
	std::cout << " Enter name: ";
	std::cin >> tableName;
	std::cout << " Enter wood type (Pine, Oak): ";
	std::cin >> tableWoodType;
	
	Table t = Table(tableName, tableWoodType);
	t.ReadDimensions();
	
	std::cout << "Creating bed...\n";
	std::cout << " Enter name: ";
        std::cin >> bedName;
        std::cout << " Enter size (Twin, Full, Queen, King): ";
        std::cin >> bedSize;
	
	Bed b = Bed(bedName, bedSize);
	b.ReadDimensions();
	std::cout << "\nPrinting objects ...\n";
	t.Print();
	b.Print();

	return 0;
}
