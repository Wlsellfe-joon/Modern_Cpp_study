#include <iostream>
#include <string.h>
#include <vector>
#include "5_Circle_using_vector.h"
using namespace std;

void main() {
	vector<Circle> C;

	for (int i = 0; i < 10; i++) {
		Circle object{ rand() % 300, rand() % 200, rand() % 100 };
		C.push_back(object);
	}

	for (auto& c : C) {
		c.print();
	}

}