#include <iostream>
using namespace std;

struct Car{
	string make;
	int year;
};

int main(){
	cout << "How many cars do you wish to catalog? ";
	int n;
	string temp;
	cin >> n;
	cin.ignore(1, '\n');
	Car* co = new Car[n];
	for(int i = 0; i<n; i++){
		cout << "Car #" << i+1 << ":" << endl;
		cout << "Please enter the make: ";
		getline(cin, co[i].make);
		cout << "Please enter the year made: ";
		cin >> co[i].year;
		cin.get();
	}
	cout << "Here is your collection:\n";
	for(int i = 0; i<n; i++){
		cout << co[i].year << " " << co[i].make << endl;
	}


}