#include <iostream>
using namespace std;
#define n 5

int main(){

	long long int arr[n] = {0};

	// Printing empty array
	for (int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;

	// for n inputs
	for (int i=0; i<n; i++){
		long long int key;
		int c = 0;
		cin >> key;

		int d;
		d = key%n;

		for (int j=0; j<n; j++){
			if(arr[d] > 0){
				d++;
				c++;
			}
		}
		arr[d] = key;

		for (int i=0; i<n; i++){
			cout << arr[i] << " ";
		}

		cout << endl;
		
		cout << "Collisions " << c << endl;
	}

}