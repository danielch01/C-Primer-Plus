#include <iostream>
using namespace std;

int main(){
	string month[12] = {"Jan", "Feb", "March", "April", "May", "June", "July", "August", "Sept", "Oct", "Nov", "Dec"};
	int sales[12];
	cout << "For each month, enter the number of books sold that month." << endl;
	for(int i = 0; i<12; i++){
		cout << month[i] << ": ";
		cin >> sales[i];
	}
	int total = 0;
	for(int i = 0; i<12; i++){
		total += sales[i];
	}
	cout << "The total sales for this year is: " << total << " books." << endl;
	return 0;
}