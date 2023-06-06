#include <iostream>
#include <string>
#include "CIrcle.h"
#include <Windows.h>
using namespace std;

void Circle::draw() {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, x - Circle::radius, y - Circle::radius, x + Circle::radius, y + Circle::radius);
}

