#include <iostream>
using namespace std;
const int days = 86400;
const int fact = 3600;
const int factoid = 60;

int main(){
	int sec, min, hrs, d, s;
	int temp;
	cout << "Enter the number of seconds: _";
	cin >> sec;
	d = sec/days;
	temp = sec%days;
	hrs = temp/fact;
	temp = temp%fact;
	min = temp/factoid;
	s = temp%factoid;
	cout << " = " << d << " days, " << hrs << " hrs, " << min << " mins, " << s << " sec" << endl;
}