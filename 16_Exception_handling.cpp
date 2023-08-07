#include<iostream>
using namespace std;

int main() {

	int* p = new int{ 12 };
	int persons = 0;
	int slices_per_person = 0;

	//exception block
	try {
		cout << "Enter the number of pizza: ";
		cin >> *p;
		cout << "Enter the number of person: ";
		cin >> persons;

		if (persons < 0) throw "negative";
		if (persons == 0) throw persons;
		slices_per_person = (*p) / persons;
		cout << "The num of Pizza per Person is " << slices_per_person << "." << endl;
		delete p;
	}
	// multi-catch block
	catch (exception& e) {
		cout << "Standard library exception occured!" << e.what() << endl;
	}

	catch (const char* e) {
		cout << "Error: The num of person is " << e << endl;
	}

	catch (int e) {
		cout << "Error: The num of person is " << e << endl;
	}

	return 0;
}