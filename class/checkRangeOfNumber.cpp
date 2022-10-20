#include <bits/stdc++.h>

using namespace std;


int main() {
	
	int number;
	cout << "Enter firstNumber : ";
	cin >> number;
	
	if(number > 0) {
		cout << "Number is positive" <<endl;
	}else if(number < 0) {
		cout << "Number is negative" <<endl;
	}else {
		cout << "Number is zero" <<endl;
	}
	
	return 0;	
}