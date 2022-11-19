#include <bits/stdc++.h>

using namespace std;

int getSum(int num) {
	if(num <= 0 || num < 10) {
		return num;
	}else {
		return getSum(num/10) + num%10;
	}
}

int main() {
	
	int num;
	
	cout << "Enter a number : ";
	cin >> num;
	
	
	cout << getSum(num);
	
	
	return 0;
}