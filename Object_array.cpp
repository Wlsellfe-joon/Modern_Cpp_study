#include <iostream>
#include <string.h>
using namespace std;
// array of the object

class Circle {
public:
	int x, y;
	int radius;
	Circle(int x = 0, int y = 0, int radius = 0) :x{ x }, y{ y }, radius{ radius }{}
	void print();
};

void Circle::print() {
	cout << "¹ÝÁö¸§: " << radius << "@(" << x << ", " << y << ")" << endl;
}

void main() {
	Circle objarray[10];

	for (auto& c : objarray) {
		c.x = rand() % 500;
		c.y = rand() % 300;
		c.radius = rand() % 100;
	}

	for (auto& c : objarray) {
		c.print();
	}
}

