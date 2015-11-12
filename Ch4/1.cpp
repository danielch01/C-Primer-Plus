#include <iostream>
using namespace std;

int main(){
	char fName[10], lName[10];
	char grade[5] = {'A', 'B', 'C', 'D', 'F'};
	char g;
	int age;

	cout << "What is your first name? ";
	cin.getline(fName, 10); // remember, cin.getline(variable, arrSize)
	cout << "What is your last name? ";
	cin.getline(lName, 10);
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