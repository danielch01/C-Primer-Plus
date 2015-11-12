#include <iostream>
using namespace std;

struct Pizza{
	string name;
	double diameter, weight;
};

int main(){
	char choice;
	do{
		Pizza po;
		cout << "Name: ";
		getline(cin, po.name);
		cout << "Diameter: ";
		cin >> po.diameter;
		cout << "Weight: ";
		cin >> po.weight;
		cout << po.name << ", " << po.diameter << ", " << po.weight << endl;
		cout << "Any more pizzas? (y/n) ";
		cin >> choice;
		cin.get();
	}while(choice == 'y');
	

	return 0;
}