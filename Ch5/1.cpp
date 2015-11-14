#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int a, b;
	int ctr = 0;
	cout << "Please enter two integers:" << endl;
	cin >> a;
	cin >> b;
	for(int i = a; i <= b; i++){
		ctr += i;
	}
	cout << "The sum of all the integers from " << a << " to " << b << " is " << ctr << endl;
	return 0;
}
