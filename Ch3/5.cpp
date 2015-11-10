#include <iostream>
using namespace std;


int main(){
	int long long worldPop, usPop;
	double perc;
	cout << "World's pop: ";
	cin >> worldPop;
	cout << "US pop: ";
	cin >> usPop;
	perc = (double(usPop)/double(worldPop))*100;
	cout << "The population of the US is " << perc << "% of the world population" << endl;
}