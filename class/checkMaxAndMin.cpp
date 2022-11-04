#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int numbers[10] = { 14,3,7,6,41,56,11,25,9,6 };
	int max = numbers[0];
	int min = numbers[0];
	
	for(int i=0; i<10; i++) {
		if(numbers[i] > max) {
			max=numbers[i];
		}else if(numbers[i] < min) {
			min=numbers[i];
		}else {
			continue;
		}
	}
	
	cout << "Max is : " << max << " Min is : " << min <<endl;

	return 0;	
}