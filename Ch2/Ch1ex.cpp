#include <iostream>
using namespace std;

void twoTimes(){
	cout << "Three blind mice\nThree blind mice" << endl;
}

void twice(){
	cout << "See how they run\nSee how they run" << endl;
}

int main(){
	// 1. Write a C++ program that displays your name and address (or if you value your privacy, a fictitious name and address).
	std::cout << "Name: Daniel Choi" << std::endl;
	std::cout << "Address: 1125 Arapahoe Street" << std::endl;
	cout << endl;
	// 2. Write a C++ program that asks for a distance in furlongs and converts it to yards. (One furlong is 220 yards.)
	int furlongs;
	cout << "How many furlongs? ";
	cin >> furlongs;
	cout << "That is about " << furlongs*220 << " yards in length" << endl;
	cout << endl;
	// 3. Write a C++ program that uses three user-defined functions (counting main() as one) and produces the following output:
	twoTimes();
	twice();
	cout << endl;

	// 4. Write a program that asks the user to enter his or her age.The program then should display the age in months:
	int age;
	cout << "What is your age? ";
	cin >> age;
	cout << "Your age in months is " << age*12 << endl;

	return 0;
}
