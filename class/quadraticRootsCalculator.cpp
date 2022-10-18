#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int a, b, c, delta;
	
	cout << "Enter a : ";
	cin >> a;
	
	cout << "Enter b : ";
	cin >> b;

	cout << "Enter c : ";
	cin >> c;
	
	delta = 4*a*c;
	int poweredB = pow(b, 2);
	b = -b;
	
	int x1 = b + sqrt(poweredB - delta);
	int x2 = b - sqrt(poweredB - delta);
	
	
	cout << "X1 is :" << x1 <<endl;
	cout << "X2 is :" << x2 <<endl;
		
	return 0;
}