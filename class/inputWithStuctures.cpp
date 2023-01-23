#include <bits/stdc++.h>

using namespace std;

void display(string name, int age) {
	cout << " You are " << name << " you have " << age << " years !" <<endl;
}

struct Student {
	string name;
	int age;
};


int main() {
	
	Student student1;
	
	cout << "Enter you name : " ;
	cin >> student1.name;
	
	cout << "Enter you age : " ;
	cin >> student1.age;
	
	display(student1.name, student1.age);
	
	return 0;
}