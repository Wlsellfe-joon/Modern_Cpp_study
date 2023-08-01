#include<iostream>
#include<string>
using namespace std;

class Date {
private:
	int year;
	int month;
	int day;

public:
	Date(int y, int m, int d) :year{ y }, month{ m }, day{ d }{}
	Date(const Date& other);
	~Date() { }

	void print() {
		cout << this->year << "." << month << "." << day << endl;
	}
};

Date::Date(const Date& other) {
	this->year = other.year;
	this->month = other.month;
	this->day = other.day;
}

class Person {
private:
	string name;
	Date birth_day;
	static int count;
	const static int MAX_Person = 500;

public:
	Person(string name, Date b_d) : name{ name }, birth_day{ b_d }{
		count++;
		if (count == MAX_Person) { cout << "Too many person!" << endl; }

	}
	~Person() {}
	void print() {
		cout << "Name: " << name << endl;
		birth_day.print();
		cout << this->count << endl;
	}
};

int Person::count = 0; // static variable initializing

int main() {
	Date d{ 1997, 10, 14 };
	Person p{"±èºÀ±¸", d};
	Person p_2{ "Á¶ºÀ±¸", d };
	p.print();
	return 0;
}