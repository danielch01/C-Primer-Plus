#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int num;
	int ctr = 0;
	std::cout << "Enter each number:" << std::endl;
	cin >> num;
	ctr += num;
	while(num!=0){
		cin >> num;
		ctr += num;
	} 
	std::cout << "The total is: " << ctr << std::endl;
	return 0;
}