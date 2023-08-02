#include <iostream>
using namespace std;

class PassangerCar {
public:
	int seats;
	int ex;
	void set_seats(int n) { seats = n; }
};

class Truck {
public:
	int payload;
	int ex;
	void set_payload(int load) { payload = load; }
};

class Pickup :public PassangerCar, public Truck {
public:
	int tow_capability;
	void set_tow(int capa) { tow_capability = capa; }
};

int main() {
	Pickup my_car;
	my_car.set_seats(5);
	my_car.set_payload(10000);
	my_car.set_tow(30000);
	
	// If there are multiple variables having same name in the parent classes, the error will be occured! 
	// here is a solution
		// my_car.ex = 10; << Error occur
		// my_car.PassangerCar::x = 10; << Solution!! (you need to fix the range of parents)

	return 0;
}