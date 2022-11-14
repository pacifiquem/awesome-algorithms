#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int num;
	
	cout << "Enter a number : ";
	cin >> num;
	
	string numString = to_string(num);
	char numChars[5];
	strcpy(numChars, numString.c_str());
	char * numArr = strtok(numChars, "");
	
//	int size = sizeof(numArr) / sizeof(char);
	
	char * reversedNum = strrev(numArr);
	
	cout << reversedNum;
	
	return 0;
}