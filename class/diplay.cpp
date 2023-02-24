#include <bits/stdc++.h>


using namespace std;
struct Student
{
    string name;
    int age;
    int rollNumber;
    float marks;
};
int main()
{
    Student student1;
    Student student2;
    Student student3;
    cout << "Enter names: ";
    cin >> student1.name>>student2.name>>student3.name;
    cout << "Enter ages: ";
    cin >> student1.age>>student2.age>>student3.age;
    cout << "Enter roll numbers: ";
    cin >> student1.rollNumber>>student2.rollNumber>>student3.rollNumber;
    cout << "Enter marks: ";
    cin >> student1.marks>>student2.marks>>student3.marks;
    ofstream file;
    file.open("student.txt");
    file << "Name: " << student1.name << endl;
    file << "Age: " << student1.age << endl;
    file << "Roll Number: " << student1.rollNumber << endl;
    file << "Marks: " << student1.marks << endl;
    file.close();
    ifstream file2;
    file2.open("student.txt");
    string line;
    while (getline(file2, line))
    {
        cout << line << endl;
    }
    file2.close();
    return 0;
}