#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int a, b, c, delta, x1, x2;
	
	cout << "Enter a : ";
	cin >> a;
	
	cout << "Enter b : ";
	cin >> b;

	cout << "Enter c : ";
	cin >> c;
	
	delta = pow(b, 2) - (4*a*c);	
	x1 = (-b + sqrt(delta)) / 2*a;
	x2 = (-b - sqrt(delta)) / 2*a;	
	
	
	cout << "X1 is :" << x1 <<endl;
	cout << "X2 is :" << x2 <<endl;
		
	return 0;
}