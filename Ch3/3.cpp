#include <iostream>
using namespace std;
const int fact = 60;

int main(){
	double deg, arcmin, arcsec;
	cout << "Enter a latitude in degrees, minutes, and seconds:"<< endl;
	cout << "First, enter the degrees: ";
	cin >> deg;
	cout << "arc minutes: ";
	cin >> arcmin;
	cout << "arc seconds: ";
	cin >> arcsec;
	cout << deg + (arcmin/fact)+(arcsec/(fact*fact)) << " degrees" << endl;
}