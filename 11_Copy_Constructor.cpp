#include <iostream>
#include <memory>
using namespace std;

class Person {
private:
	int* age;
	string* name;


public:
	Person(int ages, string names) : age{ new int {ages} }, name{ new string{names} }{} //General initiator
	Person(const Person& other); // Copy Contructor for deep copy(Not a shallow copy)
	~Person() {
		delete age;
		delete name;
	} //Destructor
};

// Copy Constructor definition
Person::Person(const Person& other) { 
	this->age = other.age;
	this->name = other.name;
}