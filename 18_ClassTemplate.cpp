#include<iostream>
using namespace std;

template <typename T> 
class Optimizer {
protected:
	T val_Real;
	T val_Pred;

public:
	void set_val_Real(T value);
	void set_val_Pred(T value);
	T minus();
	double MSE();
};

template<typename T>
void Optimizer<T>::set_val_Real(T value) {
	val_Real = value;
}

template<typename T>
void Optimizer<T>::set_val_Pred(T value) {
	val_Pred = value;
}

template<typename T>
T Optimizer<T>::minus() {
	return val_Real - val_Pred;
}

template<typename T>
double Optimizer<T>::MSE() {
	return sqrt(this->minus()) * 0.5;
}

int main() {
	Optimizer<int> obj;
	obj.set_val_Real(45);
	obj.set_val_Pred(30);

	cout << "object MSE val: " << obj.MSE();
	return 0;
}