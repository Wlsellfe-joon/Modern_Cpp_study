# include <iostream>
using namespace std;

int main()
{
	const auto people { 10 };
	int Num[people];


	for (int i = 0; i < people; i++) {
		cout << "How many apple did you eat?: ";
		cin >> Num[i];
		cout << endl;
	}

	cout << " Total Number of Apples: ";
	for (int i=0; i < people; i++) {
		cout << Num[i] << " ";
	}

	int max = Num[0];
	int index;
	for (int i = 0; i < people; i++) {
		if (max < Num[i + 1]){
			max = Num[i + 1];
			index = i + 1;
		}
	}
	cout << "°¡Àå ¸¹ÀÌ ¸ÔÀº³ðÀº " << index << "¹øÂ°³ð!!" << endl;
	return 0;
}