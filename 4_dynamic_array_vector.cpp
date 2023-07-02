#include <iostream>
#include <vector>
using namespace std;

int main(void){
	//Declaration
	vector<int> v1;

	// push and pop operator
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(15);
	v1.push_back(33);

	v1.pop_back();

	//displaying_1
	cout << "v1 = ";
	for (auto& c : v1) {
		cout << c << " ";
	}
	cout << endl;

	//displaying_2
	for (auto p = v1.begin(); p != v1.end(); ++p)
		cout << *p << endl;
	
	// Deleting and displaying a middle value
	v1.erase(v1.begin() + 1);
	cout << "v1 = ";
	for (auto& c : v1) {
		cout << c << " ";
	}
	cout << endl;

	//vector copying
	vector<int> v2(v1);

	//string using vector
	vector<string> vec;
	vec.push_back("YONG");
	vec.push_back("JUN");
	vec.push_back("JJANG");

	for (auto& k : vec) {
		cout << " " << k;
	}

	//indexing
	cout << endl << vec[1];
	return 0;
}
