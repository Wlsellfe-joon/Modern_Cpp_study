# include <iostream>
# include <string>
# include "1_Circle.h"
using namespace std;

int main()
{
	for (int i = 0; i < 10; i++) {
		int x = 100 + rand() % 300;
		int y = 100 + rand() % 300;
		int r = rand() % 100;
		Circle c{ x, y, r, "yellow" };
		c.draw();
	}
	return 0;
}