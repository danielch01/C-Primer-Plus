#include <iostream>
const int ArSize = 16; // example of external declaration int main()

int main(){
	long double factorials[ArSize] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}
	factorials[1] = factorials[0] = 1LL; 
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i-1]; 
	for (int i = 0; i < ArSize; i++)
		std::cout << i << "! = " << factorials[i] << std::endl; 
	return 0;
}