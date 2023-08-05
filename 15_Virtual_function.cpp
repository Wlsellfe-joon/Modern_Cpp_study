#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
	int x, y;
public:
	Shape(int x, int y) :x{ x }, y{ y }{}
	virtual ~Shape() { cout << "shape destructor" << endl; }	// virtual destructor for up casting
	virtual void draw() = 0;	// virtual tunction
};

class Rect :public Shape {
private:
	int width, height;
public:
	Rect(int x, int y, int w, int h) :Shape(x, y), width{ w }, height{ h }{}
	void draw() {
		cout << "Rect drawing" << endl;
	}
	~Rect() { cout << "Rect destructor" << endl; }
};


int main() {
	Shape* p = new Rect(0, 0, 100, 100);	// Up-casting
	p->draw();
	delete p;

	return 0;
}

