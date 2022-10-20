#include <bits/stdc++.h>

using namespace std;

int main() {
	float radius;
	
	cout << "Enter radius : ";
	cin >> radius;
	
	const double PI = 3.14159265359;
	float cubicRadius = pow(radius, 3);
	double undevidedArea = 4 * PI * cubicRadius;
	double area = undevidedArea / 3;
	cout << "Area is equal to : " << area <<endl;
	
	return 0;
}