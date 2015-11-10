#include <iostream>
using namespace std;
const int fact = 12;
const double meters = 0.0254;
const double kg = 2.2;

int main(){
	int feet, inches, weight;
	cout << "Feet: _";
	cin >> feet;
	cout << "Inches: _";
	cin >> inches;
	cout << "Weight: _";
	cin >> weight;
	double met = ((feet*fact)+inches)*meters;
	double mass = weight/kg;
	cout << "BMI: " << mass/(met*met) << endl;
}