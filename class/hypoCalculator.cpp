#include <bits/stdc++.h>

using namespace std;


int main() {
	int base=0, height = 0;
	
	cout << "Enter base : ";
	cin >> base;
	
	cout << "Enter height : ";
	cin >> height;
	
	int hypo = sqrt(pow(base, 2) + pow(height, 2));
	
	cout << "Hypotenuse is : " << hypo <<endl;
		
	return 0;
}