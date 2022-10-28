#include <bits/stdc++.h>
using namespace std;


int main() {
	
	int a[40] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(a);
	int elements = sizeof(a)/ sizeof(int);
	int sizeBySize = a.size();
	cout << "The size is :  " << size << " " << "Elements are : " << elements <<endl;
	
	cout << "Elements : ";
	for(int i=0; i<elements; i++) {
		cout << a[i] << " ";
	}
	
	return 0;
}