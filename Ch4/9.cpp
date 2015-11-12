#include <iostream>
using namespace std;

struct CandyBar{
	char brand[100];
	double wt;
	int cal;
};

int main(){
	CandyBar* array = new CandyBar[3];

	for(int i = 0; i<3; i++){
		cout << "Name: ";
		cin.getline(array[i].brand, 10);
		cout << "Weight: ";
		cin >> array[i].wt;
		cout << "Calories: ";
		cin >> array[i].cal;
		cin.get();
	}
	

	return 0;
}