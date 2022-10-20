#include <bits/stdc++.h>

using namespace std;

void insertAt(int numberArray[], int index, int element) {
	
	for(int i=sizeof(numberArray); i >= 0; i--) {
		if(i>index) {
			numberArray[i + 1] = numberArray[i];
		}else if (i==index) {
			numberArray[index] = element;
		}else {
			break;
		}	
	}
	
	for(int i=0; i<sizeof(numberArray); i++) {
		cout << "Element " << i+1 << ": " << numberArray[i] <<endl;
	}
}
int main() {
	
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	insertAt(array, 2, 100000);
	
	return 0;
}