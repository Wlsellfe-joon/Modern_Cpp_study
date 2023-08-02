#include<iostream>
#include<string>
using namespace std;

class Shape {
protected:
	int x, y;
	
public:
	Shape(int xloc, int yloc) :x{ xloc }, y{ yloc }{}
	~Shape() {}
	void print() { cout <<"Parent's class displaying: "<< x << ", " << y << endl; }
};

class Rectangle :public Shape {
	int width, height;
public:
	Rectangle(int x, int y, int w, int h) :Shape(x, y), width{ w }, height{ h }{}
	~Rectangle() {}
	void print() { // Reddfinition of parent method
		Shape::print(); // inherited parent's class method calling
		cout << "Child class displaying: "<< x << ", " << y << ", " << width << ", " << height << endl;
	}
};

int main() {
	Rectangle R(5, 5, 10, 20);
	R.print();
	return 0;
}