#include <iostream>
using namespace std;

const double PI = 3.14;

int main() {
	
	float radius, area, circumference;
	
	cout << "Enter circle's radius : ";
	cin >> radius;
	
	area = (radius * radius) * PI;
	circumference = (radius * 2) * PI;
	
	cout << "Area is : " << area << endl;
	cout << "Circumference is :" << circumference << endl;
	
	return 0;
	
}