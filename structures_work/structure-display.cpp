#include <bits/stdc++.h>

using namespace std;

int main(){

	cout << endl <<endl;
	cout << "============  List Of All Registered Students ==========" <<endl<<endl;

	fstream students_file;
	int i = 1;

	students_file.open("bwenge.txt", ios::in);
	
	if (students_file.is_open()){
		
		string line;
		
		while (getline(students_file, line)){
			
			cout << "Student " << i << " (Roll-Number Name Age Marks) : " << line << endl;
			i++;
	
		}
	}
	
	students_file.close();
	
}