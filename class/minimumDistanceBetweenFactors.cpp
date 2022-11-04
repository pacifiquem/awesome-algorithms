#include <bits/stdc++.h>

using namespace std;

void minDistance(int number) {
	
	vector<int> facterials;
	int inputNumber = number;
	
	for(int i=1; i<inputNumber/2; i++) {
		if(inputNumber%i == 0) {
			facterials.push_back(i);
			inputNumber = inputNumber/i;
			i=1;
		}
	}
	
	int minDistance = facterials.at(facterials.size()-1) - facterials.at(facterials.size()-2);
	cout << "Minimum distance : " << minDistance <<endl;
	
}

int main() {
	
	minDistance(8);
	
	return 0;
}
