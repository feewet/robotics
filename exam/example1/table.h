// table.h

#ifndef TABLE_H
#define TABLE_H
#include "furniture.h"

class Table : public Furniture
{
private:
	std::string woodType;

public:
	Table(std::string _name, std::string _woodType);
	void Print();
};

#endif
