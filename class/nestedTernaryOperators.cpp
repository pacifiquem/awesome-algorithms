#include <iostream>

using namespace std;

int main() {
	int marks;
	cout << "Enter marks :";
	cin >> marks;
	
	(marks >= 16) ? cout << "Grade A" : (marks > 14 ) ? cout << "Grade B" : ( marks > 10 ) ? cout<< "Grade C" :  cout << "Grade D";
	
	return 0;
};