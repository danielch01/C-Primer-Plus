#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

int main(){
	char word[10];
	cout << "Enter words:\n";
	cin >> word;
	int i = 1;
	while(strcmp(word,"done") != 0){
		cin >> word;
		i++;
	}
	cout << "You typed " << i-1 << " words" << endl;

}