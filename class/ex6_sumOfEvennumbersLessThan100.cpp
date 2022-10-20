#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int sum = 0;
	
	for(int i = 0; i < 100; i++) {
		if(i%2 == 0) {
			sum += i;
		}else {
			continue;
		}
	}
	
	cout << "sum of all even number lessthan 100 is : " << sum <<endl;
	
	return 0;
}