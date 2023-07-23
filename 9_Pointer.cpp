#include <iostream>
#include <memory> // smart pointer
using namespace std;

int main() {
	int* t = new int; // Dynamic mem alloc
	*t = 99; // there are mem waste if you not delete a pointer;
	delete t;

	unique_ptr<int> p(new int); // single parameter pointer
	unique_ptr<int[]> buf(new int[10]); // array pointer

	for (int i = 0; i < 10; i++) {
		buf[i] = i;
	}

	for (int i = 0; i < 10; i++) {
		cout << buf[i] << " ";
	}

	cout << endl;
	return 0;
}