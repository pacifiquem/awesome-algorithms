#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int product = 0;
	
	for(int i = 0; i<20; i++) {
		product *= i;
	}
	
	cout << "sum of all number lessthan 20 is : " << product <<endl;
	
	return 0;
}