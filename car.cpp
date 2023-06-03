#include <iostream>
#include <string>
#include "car.h"
using namespace std;

int car::get_speed() {
	return car::speed;
}

void car::speed_up() {
	car::speed += 100;
}