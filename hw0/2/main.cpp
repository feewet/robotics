// problem 1
#include <iostream>
using namespace std;

void copyArray(int*, int*, int);
void printAddress(int*, int, string);

int x = 1;
int arr[5] = {10, 11, 12, 13, 14};
int crr[5] = {30, 31, 32, 33, 34};

int main()
{	
	printAddress(crr, 5, "crr");
	copyArray(arr, crr, 5);
	printAddress(crr, 5, "crr");
	return 0;
}

// copies array1 into array2
void copyArray(int* arr1, int* arr2, int size) {
	// loop through array addresses
	for (int i = 0; i < size; i++) {
		*arr2 = *arr1;
		arr2++;
		arr1++;
	}
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

