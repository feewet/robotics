//homework2
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

// prototypes
void prompt(int&, int&);
void dataBytes();
long power(int, int);
int maxNumber(int, int);
void printFormats(int, int);
string toString(int);
string toHex(int);
string toOct(int);
char toChar(int);

int main() {
	int x, y;
	prompt(x, y);
	cout << x << ", " << y << endl;
	dataBytes();
	cout << "x^y: " << power(x, y) << endl;
	cout << "max: " << maxNumber(x, y) << endl;
	printFormats(x, y);
	return 0;
}

// get input from use by referencer
void prompt(int& x, int& y) {
	cout << "enter values" << endl;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	std::cin >> y;
}

// print number	of bytes used to store:
// bool	char int float double 
void dataBytes() {
	cout << "bool  : 1 byte" << endl;
	cout << "char  : 1 byte" << endl;
	cout << "int   : 4 bytes" << endl;
	cout << "float : 4 bytes" << endl;
	cout << "double: 8 bytes" << endl;
}

// 1st number raised to	the second power
long  power(int x, int  y) {
	return pow(x, y);
}

// maximum of two numbers using algorithm library
int maxNumber(int x, int y) {
	return max(x, y);
}

// two numbers in decimal, hexadecimal, and octal formats
void printFormats(int x, int y) {
	// print table
	cout << "var     dec     hex     oct" << endl;
	cout << "x       ";
	cout << dec << x << "       ";
	cout << "0x" << toHex(x) << "     ";
	cout << toOct(x) << "         " << endl;
	cout << "y       ";
	cout << dec << y << "       ";
	cout << "0x" << toHex(y) << "     ";
	cout << toOct(y) << "      " << endl;
}

// recursive toHex function
// converts an integer x to a Hexadecimal string
string toHex(int x)
{
	// base case 
	if (x == 0) {
		return "";
	}
	
	// else calculate remainder 16
	int rem = x % 16;
	x /= 16;
	
	char hex;
	// append string hex
	if (rem > 9) {
		hex = 'A' + (rem - 10);
	}
	else {
		hex = '0' + (rem - 10);
	}

	return toHex(x) + hex;
}

string toOct (int x) {
	return "--";	
}

// safely converts an int into to a string
string toString(int x) {
	
	// base case
	if (x == 0) {
		return "";
	}
	
	string hex;
	// calculate remainder
	int rem = x % 10;
	x /= 10;
	
	return toString(x) + (char)('0' + (rem - 10));
}

char toChar(int decimal) {
	return '0' + decimal;
}
