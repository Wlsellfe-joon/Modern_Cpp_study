# include <iostream>
# include <string>
# include "car.h"
using namespace std;

int main()
{
	car A;
	A.speed = 500;
	cout << "My car speed before: " << A.get_speed() << endl;

	A.speed_up();
	cout << "My car speed now: " << A.get_speed();

	return 0;
}