#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int productOfPrimeNumbers = 1;
	bool isPrime = false;
	int i, j = 0;
	
	for(i=0; i<100; i++) {
		
		for(j=0; j<=(i/2); j++) {
			if(i%j != 0) {
				isPrime = true;
				break;
			}else {
				continue;
			}
		}
		
		if(isPrime) {
			productOfPrimeNumbers *=i;
		}else {
			continue;
		}
	}
	
	cout << "Product of prime numbers lessthan 100 is " << productOfPrimeNumbers <<endl;
	
	return 0;
}