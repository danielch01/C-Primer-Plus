#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string fName, lName, name;
	cout << "First name: ";
	cin >> fName;
	cout << "Last name: ";
	cin >> lName;
	name = lName + ", " + fName;
	cout << "Full name: " << name << endl;
	return 0;
}