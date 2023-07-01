#include <iostream>
#include <string.h>
using namespace std;
class Time {
private:
	int hour;
	int minute;

public:
	Time(int h, int m) :hour{ h }, minute{ m }{}
	void inc_hour();
	void print();

	// 접근자 및 설정자
	int getHour() { return hour; }
	int getMinute() { return minute; }
	void setHour(int h) { hour = h; }
	void setMinute(int m) { minute = m; }
};

void Time::inc_hour() {
	++hour;
	if (hour > 23) 
		hour = 0;
}

void Time::print() {
	cout << hour << ":" << minute << endl;
}

void main() {
	Time a(13, 30);
	a.print();
	a.inc_hour();
	a.print();
}