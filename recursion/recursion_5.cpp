#include <bits/stdc++.h>

using namespace std;

char recursion(char *arr, int *index) {
	
	if(arr[*index] != '\0') {
		*index = *index +1;
		return recursion(arr, index);
	}
}

int main() {
	
	char arr[6] = {'a', 'b', 'c', 'd', 'a', 'b'};
	int initialIndex = 0;
	recursion(arr, &initialIndex);
	
	cout << initialIndex;
	
	return 0;
}