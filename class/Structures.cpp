#include <bits/stdc++.h>

using namespace std;


struct Student {
	int age;
	string name;
	void display() {
		cout << "Student's name is " << name << " and his age is " << age <<endl;
	}
};

int main() {
	
	Student student1 = {20, "Trezor"};
	student1.display();
	
	return 0;
}