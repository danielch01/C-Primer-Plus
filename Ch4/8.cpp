#include <iostream>
using namespace std;

// dynamically allocated structures use '->' to assign values to members

struct Pizza{
	string name;
	double diameter, weight;
};

int main(){
	char choice;
	do{
		Pizza* po = new Pizza;
		cout << "Name: ";
		getline(cin, po->name);
		cout << "Diameter: ";
		cin >> (*po).diameter;
		cout << "Weight: ";
		cin >> po->weight;
		cout << po->name << ", " << (*po).diameter << ", " << po->weight << endl;
		cout << "Any more pizzas? (y/n) ";
		cin >> choice;
		cin.get();
		delete po;
	} while(choice == 'y');
	

	return 0;
}