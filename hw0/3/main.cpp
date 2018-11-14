// problem 1
#include <iostream>
using namespace std;

void copyArray(int*, int*, int);
void printAddress(int*, int, string);
void printAddress(int**, int, string);
void printSubArray(int**, int, int, string);

int x = 1;
int arr[5] = {10, 11, 12, 13, 14};
int brr[5] = {20, 21, 22, 23, 24};
int crr[5] = {30, 31, 32, 33, 34};
int *drr[6] = {arr, brr, crr, &x, brr, crr};

int main()
{	
	printAddress(drr, 6, "drr");
	printAddress(arr, 5, "arr");
	printSubArray(drr, 0, 4, "drr");
	return 0;
}

// takes a location as x and y and prints the data at that location
void printSubArray(int** arr, int x, int y, string name) {
	int* ptr;
	ptr = arr[x];
	cout << name << "[" << x << "][" << y <<"] = " << ptr[y] << endl; 
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
