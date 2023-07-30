#include <iostream>
#include <memory>
using namespace std;

class Dog {
private:
	string name;
	int age;
	int* pWeight;

public:
	Dog(string name, int age, int k) :name{ name }, age{ age }, pWeight{ new int {k} } {} //initiator
	/*
		We can initiate in this way too
	Dog(string names, int ages, int k) {
		name = names;
		age = ages;
		pWeight = new int{ k };
	}*/
	~Dog() {
		cout << "called destructor!!" << endl << endl;
		delete pWeight;
	} //Destructor

	int getAge() { return age; }
	string getName() { return name; }
	int getWeight() { return *pWeight; }
	void setAge(int dog_age) { this->age = dog_age; } //this pointer, Point this class

};

int main() {
	// Make a general dog object
	cout << "General Object case" << endl;
	Dog first_dog = Dog("Bong_gu", 10, 500);
	cout << "Dog's age: " << first_dog.getAge() << " Dog's name: " << first_dog.getName() << " Dog's weights(g): " << first_dog.getWeight() << endl;

	// Make a dog object dynamically
	cout << "Dynamic object allocation case" << endl;
	Dog* pDog = new Dog("Bong_ja", 5, 300);
	cout << "Dog's age: " << pDog->getAge() << " Dog's name: " << pDog->getName() << endl;

	pDog->setAge(6);
	cout << "Dog's age after a year: " << pDog->getAge() << endl;
	delete pDog;

	// Make a dog object using smart pointer
	cout << "Using smart pointer" << endl;
	unique_ptr<Dog> spDog(new Dog("Yong_Yong", 50, 500));
	spDog->setAge(300);
	cout << "Dog's name: " << spDog->getName() << " Dog's Age: " << spDog->getAge() << " Dog's Weights: " << spDog->getWeight() << endl;

	return 0;
}