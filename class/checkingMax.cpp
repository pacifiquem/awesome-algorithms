#include <bits/stdc++.h>

using namespace std;

double maximum (double x, double y, double z) {
	double max = x;
	
	if(max < y) {
		max = y;
		return max;
	}else if(max < z) {
		max = z;
		return max;
	}
}

void duplicate(int& a, int& b) {
	a = a*2;
	b = b*2;
	cout << a << " " << b <<endl;
}

int main() {
	cout << maximum(3.333, 4.4444, 2.6543234566543) <<endl;
	int a = 70;
	int b = 60;
	duplicate(a, b);
		
	return 0;
}