#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char fName[10], lName[10];
	cout << "First name: ";
	cin.getline(fName, 10);
	cout << "Last name: ";
	cin.getline(lName, 10);
	strcat(lName, ", ");
	strcat(lName, fName);
	cout << "Full name: " << lName << endl;
	return 0;
}