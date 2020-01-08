//Lydia Fritz
//this is my own work

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	int arr[40];
	for (int i = 0; i < 40; i++) {
		arr[i] = rand() % 40;
	}

	for (int i = 0; i < 40; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
	
	return 0;
}