#include<vector>
#include<iostream>
#include<string>
7
using namespace std;
class Movie {
public:
	string name;
	double score;

	Movie(string n = "Nan", double s=0.0) :name{n}, score{s}{};
	void print() { cout << name << " : " << score << endl; }

};

void main(void) {
	vector<Movie> obj;
	char state;
	string temp_title;
	double temp_score;

	while (1) {
		for (auto& m : obj) {
			m.print();
		}
		cout << "Input: a, Exit: x" << endl;
		cin >> state;

		if (state == 'a') {
			cout << "Input the title and score of the movie (No blank space): ";
			cin >> temp_title; //The blank space is not permitted.
			cout << "Input the score of the movie: ";
			cin >> temp_score;

			obj.push_back(Movie(temp_title, temp_score));
			cout << "Movie list updated!" << endl;
		}
		else if (state == 'x') {
			break;
		}
		else
			cout << "Please check keyboard input" << endl;
	}
}