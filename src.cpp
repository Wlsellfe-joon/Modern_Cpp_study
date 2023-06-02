# include <iostream>
# include <string>
using namespace std;

class car {
public:
	string model;
	string color;
	int man_limit;
	int speed;

	void speed_up() {
		speed += 10;
	}
	
	void speed_down() {
		speed -= 10;
	}
};

int main()
{
	car A;
	A.color = 'RED';
	A.man_limit = 10;
	A.speed = 50;

	A.speed_up();
	A.speed_up();
	cout << "My car speed: " << A.speed << endl;
	return 0;
}