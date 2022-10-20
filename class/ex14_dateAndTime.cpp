#include <bits/stdc++.h>

using namespace std;


int main() {
	
	std::time_t t = std::time(0);
	char* date_time = ctime(&t);
	
	cout << "Current Date and Time is : " <<  date_time <<endl;       
	
	return 0;	
}