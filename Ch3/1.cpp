#include <iostream>
using namespace std;
const int fact = 12;

int main(){
	int height, weight;
	cout << "What is your height in inches: _";
	cin >> height;
	cout << "Height: " <<  height/fact << " feet, " << height%fact << " inches" << endl;	
}