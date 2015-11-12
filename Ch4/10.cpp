#include <iostream>
using namespace std;

struct Array{
	double time, avg;
};

int main(){
	Array* arr = new Array[3];
	cout << "Please enter your times for the 40 yd dash." << endl;
	for(int i = 0; i<3; i++){
		cin >> arr[i].time;
		cin.get();
	}
	double total = 0;
	for(int i = 0; i<3; i++){
		total += arr[i].time;
	}
	cout << "The three times you entered are: " << arr[0].time << ", " << arr[1].time << ", " << arr[2].time << endl;
	cout << "\nThe average of the times are: " << total/3 << " seconds." << endl;
	

	return 0;
}