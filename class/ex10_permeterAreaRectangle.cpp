#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int length, width;
	cout << "Enter length";
	cin >> length;
	
	cout << "Enter width";
	cin >> width;
	
	int perimeter = (length+width)*2;
	int area = length * width;
	
	cout << "Perimeter" << perimeter <<endl;
	cout << "Area" << area <<endl;
	
	return 0;
}