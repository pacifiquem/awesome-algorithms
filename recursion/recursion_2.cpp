#include <bits/stdc++.h>

using namespace std;

char recursion(char *arr, int size) {
	
	if(size < 0) {
		return '\0';
	}
	
	cout << arr[size];
	return recursion(arr, --size);
	
}

int main() {
	
	char arr[5] = {'a', 'b', 'c', 'd'};
	recursion(arr, 4);
	
	return 0;
}