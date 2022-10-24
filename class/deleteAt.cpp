#include <bits/stdc++.h>

using namespace std;

void deleteAt(int numberArray[], int index) {
	cout << sizeof(numberArray) <<endl;
	for(int i=0; i<sizeof(numberArray); i++) {
		if( i >= index) {
			numberArray[i] = numberArray[i+1];
		}
	}
	
	for(int i=0; i<sizeof(numberArray); i++) {
		cout << "Element " << i+1 << ": " << numberArray[i] <<endl;
	}
}
int main() {
	
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	deleteAt(array, 8);
	
	return 0;
}