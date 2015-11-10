// Includes problem 7

#include <iostream>
using namespace std;
const double km = 1/.6214;
const double lit = 3.875;

double mpg(double miles, double gallons){
	return miles/gallons;
}

int main(){
	int m, g;
	double dist, fuel;
	cout << "How many miles have you driven: ";
	cin >> m;
	dist = m*km;
	cout << "gallons of gas used: ";
	cin >> g;
	fuel = g*lit;
	cout << "\nYour miles per gallon is: " << mpg(m, g) << endl;
	cout << "Distance travelled: " << dist << "km" << endl;
	cout << "Fuel used: " << fuel << "liters" << endl;
}