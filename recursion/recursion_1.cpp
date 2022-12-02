#include <bits/stdc++.h>

using namespace std;

char recursion(char *arr, int index) {
	
	if(arr[index] == '\0') {
		return '\0';
	}
	
	cout << arr[index];
	return recursion(arr, ++index);
	
}

int main() {
	
	char arr[5] = {'a', 'b', 'c', 'd'};
	recursion(arr, 0);
	
	return 0;
}