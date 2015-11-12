#include <iostream>
using namespace std;

struct CandyBar{
	char brand[100];
	double wt;
	int cal;
};

int main(){
	char b;
	double w;
	int c;
	CandyBar snack[3];
	for(int i = 0; i<3; i++){
		cout << "Name: ";
		cin.getline(snack[i].brand, 10);
		cout << "Weight: ";
		cin >> snack[i].wt;
		cout << "Calories: ";
		cin >> snack[i].cal;
		cin.get();
	}

	return 0;
}