#include <iostream>

using namespace std;


int main() {
	int  marks;
	cout << "Enter your marks : ";
	cin >> marks;
	
	string status = (marks >= 10) ? "passed" : "failed" ;
	cout << "You've " << status << " !" <<endl;
	
	string grade = (marks >= 16) ? "A" : (marks > 14 ) ?  "B" : ( marks > 10 ) ?  "C" : "D";
	cout << "Grade " << grade;
	
	return 0;
	
} 