#include <iostream>
using namespace std;

int main(){
	string fName, lName;
	char grade[5] = {'A', 'B', 'C', 'D', 'F'};
	char g;
	int age;

	cout << "What is your first name? ";
	getline(cin, fName); // remember, cin.getline(variable, arrSize)
	cout << "What is your last name? ";
	getline(cin, lName);
	cout << "What letter grade do you deserve? ";
	cin >> g;
	cout << "What is your age? ";
	cin >> age;
	cout << "\nName: " << lName << ", " << fName << endl;
	for(int i = 0; i<5; i++){
		if(grade[i] == g){
			printf("Grade: %c\n", grade[i+1]);
		}
	}
	cout << "Age: " << age << endl;
	return 0;
}