#include <iostream>
#include <string>
using namespace std;

class Circle {
public:
	int x, y, radius;
	string color;

	Circle(int xval = 0, int yval = 0, int r = 0, string c = "") : x{ xval }, y{ yval }, radius{ r }, color{ c }{
	}
	void draw();

};