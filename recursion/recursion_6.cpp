#include <bits/stdc++.h>

using namespace std;

int getIntFromChars(char *arr, int arrSize, int intPosition, int *finalNumber) {
	
	switch(arr[arrSize]) {
		case '1':
			*finalNumber += 1*pow(10, intPosition);
			break;
		case '2':
			*finalNumber += 2*pow(10, intPosition);
			break;	
		case '3':
			*finalNumber += 3*pow(10, intPosition);
			break;
		case '4':
			*finalNumber += 4*pow(10, intPosition);
			break;
		case '5':
			*finalNumber += 5*pow(10, intPosition);
			break;
		case '6':
			*finalNumber += 6*pow(10, intPosition);
			break;
		case '7':
			*finalNumber += 7*pow(10, intPosition);
			break;
		case '8':
			*finalNumber += 8*pow(10, intPosition);
			break;
		case '9':
			*finalNumber += 9*pow(10, intPosition);
			break;
		case '\0':
			return *finalNumber/10;
		default:
			return 0;
	}
	
	
	return getIntFromChars(arr, --arrSize, ++intPosition, finalNumber);
	
}

int main() {
	
	int finalNumber = 0;
	char intArr[5] = {'1', '2', '3', '4', '5'};
	finalNumber = getIntFromChars(intArr, 4, 1, &finalNumber);
	
	cout << finalNumber+1;
	
	return 0;
}