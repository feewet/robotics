// bed.h
#ifndef BED_H
#include "furniture.h"
#define BED_H

class Bed : public Furniture
{
private:
	std::string size;
public:
	Bed(std::string _name, std::string _size);
	void Print();
};

#endif
