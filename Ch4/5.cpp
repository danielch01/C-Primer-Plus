#include <iostream>
using namespace std;

struct CandyBar{
	char brand[100];
	double wt;
	int cal;
};

int main(){
	CandyBar snack = {
		"Mocha Munch",
		2.3,
		1500
	};
	cout << "The brand name: "<< snack.brand << endl;
	cout << "Weight: " << snack.wt << endl;
	cout << "Calories: " << snack.cal << endl;

	return 0;
}