#include <bits/stdc++.h> 

using namespace std;

void swap(int a, int b) {
	int temp;
	
	temp = a;
	a = b;
	b = temp;
	
	cout << "firstNumber is " << a << " secondNumber is " << b; 
}

int main() {
	
	int firstNumber, secondNumber;
	cout << "Enter firstNumber : ";
	cin >> firstNumber;
	
	cout << "Enter secondNumber : ";
	cin >> secondNumber;
	swap(firstNumber, secondNumber);
	
	return 0;
}