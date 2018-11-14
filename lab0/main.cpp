// lab0 Harold Hyatt

#include <iostream>
using namespace std;

int* array;
int n; // size

void initialize () {
	n = 2;
	array = new int[n];
	return;
}

void finalize () {
	delete array;
	return;
}

int  menu() {
	string choice = "0";
	cout << "Main menu:\n\n1. Print the array\n2. Add one element\n";
	cout << "3. Remove last element\n4. Exit\n\nSelect an option: ";
	cin >> choice;

	if (choice == "1") {
                return 1;
	}
	else if (choice == "2") {
                return 2;
        }
	else if (choice == "3") {
		return 3;
        }
	else if (choice == "4") {
		return 4;
        }
	else {
		return 0;
	}
	return 0;
}

int main () {
	string message = "";
	int choice = 0;
	while (true) {
        	choice = menu();
		if (choice == 1) {
			message = "Print the array";
		}
		if (choice == 2) {
                        message	= "Add one element";
                }
		if (choice == 3) {
                        message	= "Remove last element";
                }
		if (choice == 4) {
                        cout << "Exiting\n";
			break;                
		}
		if (choice == 0)	{
                        cout << "Invalid Option!\n";
                }
		else {
			cout << "You selected \"" << message << "\"\n\n";
		}	
}
        return 0;
}
