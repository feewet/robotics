// furniture.h
#ifndef FURNITURE_H
#define FURNITURE_H

class Furniture
{
private:
	float width;
	float height;
	float depth;
	std::string name;
public:
	Furniture(std::string _name);
	void ReadDimensions();
	virtual void Print();
};

#endif
