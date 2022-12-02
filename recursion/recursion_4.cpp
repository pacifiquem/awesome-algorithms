#include <bits/stdc++.h>

using namespace std;

char printer(char *arr, int index) {
	
	if(arr[index] == '\0') {
		return '\0';
	}
	
	cout << arr[index];
	return printer(arr, ++index);
	
}

char arrayFilter(char *arr, int index, char unwantedChar, char replacingChar) {
	
	if(arr[index] == unwantedChar) {
		arr[index] = replacingChar;
	}
	
	if(arr[index] == '\0'){
		return '\0';
	}
	
	return arrayFilter(arr, ++index, unwantedChar, replacingChar);
	
}

int main() {
	char arr[8] = {'a','a','a', 'b', 'c', 'd', 'a', 'a'};
	
	arrayFilter(arr, 0, 'a', 'x');
	printer(arr, 0);
}