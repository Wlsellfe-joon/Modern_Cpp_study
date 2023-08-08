#include<iostream>
using namespace std;
// Go to configuration and set the SDL 'nope'

template <typename T>
void swap(T *a, T *b) {
	T tmp;
	tmp = (*a);
	(*a) = (*b);
	(*b) = tmp;
}

// multi-type template
template<typename T1, typename T2>
double Adder(T1 a, T2 b) {
	return a + b;
}

// overlapping for char type
void swap(char* a, char* b) {

	int len = 0;
	len = (strlen(a) >= strlen(b)) ? strlen(a) : strlen(b);
	char* tmp = new char[len + 1];

	strcpy(tmp, a);
	strcpy(a, b);
	strcpy(b, tmp);
	delete[] tmp;
}

int main() {

	int* x;
	int* y;

	int a = 100, b = 200;
	double c = 10.5;
	x = &a;
	y = &b;

	swap(x, y);
	cout << (*x) << " " << (*y) << endl;
	cout << "Summation is: " << Adder(a, c) << endl;

	return 0;
}