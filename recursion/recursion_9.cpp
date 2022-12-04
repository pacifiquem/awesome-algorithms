#include <bits/stdc++.h>

using namespace std;

namespace Identifiers {
	int lastOccurence = 0;
	int *lastOccurencePointer = &lastOccurence;
	
	int index =  0;
	int *indexPointer = &index;
}

int lastIndex(int *arr, int element) {
	
	if(arr[Identifiers::index] == '\0') {
		return Identifiers::lastOccurence;
	}
	
	if(arr[Identifiers::index] == element) {
		*Identifiers::lastOccurencePointer = *Identifiers::indexPointer;
	}
	
	*Identifiers::indexPointer += 1;
	
	return lastIndex(arr, element);

}

int main() {
	int arr[6] = {5, 5, 6, 20, 5, 6};
	int index = lastIndex(arr, 20);
	
	cout << index;
	
}