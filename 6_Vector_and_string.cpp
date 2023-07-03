#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person(string n, int a) :name{ n }, age{ a }{};
	string get_name() { return name; }
	int get_age() { return age; }
	void print() {
		cout << name << " " << age << endl;
	}
};

bool compare(Person& a, Person& b) {
	return a.get_age() < b.get_age(); //a<b then return 'True' else 'False'
}

int main() {
	vector<Person> list;

	list.push_back(Person("KIM", 30));
	list.push_back(Person("JO", 24));
	list.push_back(Person("Hong", 40));

	sort(list.begin(), list.end(), compare); //STL's Sort() function

	for (auto& p : list) {
		p.print();
	}
}