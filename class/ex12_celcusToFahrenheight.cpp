#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int celicius;
	cout << "Enter temperature in celicius";
	cin >> celicius;
	
	int fahrenheitOffset = 9*celicius/5;
	int fahrenheight = fahrenheitOffset + 32;
	
	cout << fahrenheight <<endl;
	return 0;
}