#include <iostream>
#include <vector>

class Circle {
public:
	int x, y;
	int radius;
	Circle(int x = 0, int y = 0, int r = 0) :x{ x }, y{ y }, radius{ r }{};

	void print();
};