// problem 1
#include <iostream>
using namespace std;

void printAddress(int*, int, string);
void printAddress(int**, int, string);

int *x = 1;
int &z = x;
int arr[5] = {10, 11, 12, 13, 14};
int brr[5] = {20, 21, 22, 23, 24};
int crr[5] = {30, 31, 32, 33, 34};
int *drr[6] = {arr, brr, crr, &x, brr, crr};
int y = 100;

int main()
{	
	cout << "*x = 1\ny=100\n&z=x\n";
	cout << "x: " << x << "\n";
        cout << "&x: " << &x << "\n";
        cout << "*x: " << *x << "\n";
	cout << "y: " << y << "\n";
	cout << "&y: " << &y << "\n";
	cout << "*y: " << *y << "\n";
	cout << "z: " << z << "\n";
        cout << "&z: " << &z << "\n";
        cout << "*z: " << *z << "\n";
	printAddress(arr, 5, "arr");
	printAddress(brr, 5, "brr");
	printAddress(crr, 5, "crr");
	printAddress(drr, 6, "drr");
	return 0;
}

// prints addresses of an array given a size and name 
void printAddress(int* arr, int size, string name) 
{
	cout << "Data Address   Data Value     Information" << endl;
	
	// loop through array
	for (int i = 0; i < size; i++) {
		cout << &arr[i]  << "       " << arr[i] << "      " ;
		cout << "       " <<  name << "[" << i << "]" << endl;
	}
}


// prints addresses of an array of arrays given a size and name 
void printAddress(int** arr, int size, string name) 
{
	cout << "Data Address   Data Value     Information" << endl;
	
	// loop through array
	for (int i = 0; i < size; i++) {
		cout << &arr[i]  << "       " << arr[i] << " " ;
		cout << "      " <<  name << "[" << i << "]" << endl;
	}
}

