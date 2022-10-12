#include <iostream>

using namespace std;


int main() {
	int  marks;
	cout << "Enter your marks : " <<endl;
	cin >> marks;
	
	(marks <= 10) ? cout << "You've passed !" : cout << "You've failed";
	
	return 0;
} 