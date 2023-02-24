#include <bits/stdc++.h>

using namespace std;

struct Student{
    string name;
    int age;
    int rollNumber;
    float marks;
} s1, s2, s3;

void print(Student s){
    cout << s.rollNumber << ", " << s.name << ", " << s.age << ", " << s.marks << endl;
}

int main(){

    Student students[3] = {s1, s2, s3};
    
    cout << "============  Start Registering Students . ==========" <<endl<<endl;
    
    for (int i = 0; i < 3; i++){
    	
        cout << "Enter Student " << i + 1  << " (Roll-Number Name Age Marks): ";
        cin >> students[i].rollNumber >> students[i].name >> students[i].age >> students[i].marks;
        
    }

    cout << endl<<endl<<"============  Students Registered . ==========" << endl;

    fstream students_file;
    students_file.open("bwenge.txt", ios::app);
    
    for (int i = 0; i < 3; i++){
    	
        if (students_file.is_open()){
        	
            students_file << students[i].rollNumber << "," << students[i].name << "," << students[i].age << "," << students[i].marks << endl;
            
        }
        
    }
    
    students_file.close();

    return 0;
    
}