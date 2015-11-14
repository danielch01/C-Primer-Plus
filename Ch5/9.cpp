#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

int main(){
	string word;
	cout << "Enter words:\n";
	cin >> word;
	int i = 1;
	while(word != "done"){
		cin >> word;
		i++;
	}
	cout << "You typed " << i-1 << " words" << endl;

}