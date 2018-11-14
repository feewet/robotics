#include <iostream>
#include <math.h>
using namespace std;

// prototypes
void getStats(float&, float&, int&);
float calculateAwesomenessLevel(float, float, int, float&);
void displayLevel(float);

int main(void)
{
	float str, agi, awe;
	int lucky;
	getStats(str, agi, lucky);
	calculateAwesomenessLevel(str, agi/2, lucky*2, awe);
	displayLevel(awe);
	return 0;
}

void getStats(float& strength, float& agility, int& luck)
{
	cout << "Enter strength, agility and luck: ";
	cin >> strength >> agility >> luck;
}

float calculateAwesomenessLevel(float strength, float agility, int luck,
				 float& awesome)
{
	awesome = (strength * pow(luck, 2+agility));
}

void displayLevel(float awesome)
{
	cout << "The awesome level is: " << awesome << endl;
}
