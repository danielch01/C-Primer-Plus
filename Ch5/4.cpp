#include <iostream>
#include <cstring>
using namespace std;

int main(){
	double bal = 100;
	bal += 10;
	double bal2 = 100;
	bal2 += .05*bal2;
	int ctr = 1;
	while(bal > bal2){
		bal += 10;
		bal2 += .05*bal2;
		ctr += 1;
	}
	cout << "Daphne: $" << bal << endl;
	cout << "Cleo: $" << bal2 << endl;
	cout << "Number of years: " << ctr << endl;
}