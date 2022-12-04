#include <bits/stdc++.h>

using namespace std;

namespace Identifiers {
	int index =  0;
	int *indexPointer = &index;
}

int firstIndex(int *arr, int element) {
	
	if(arr[Identifiers::index] == '\0') {
		return 45698967;
	}
	
	if(arr[Identifiers::index] == element) {
		return Identifiers::index;
	}
	
	*Identifiers::indexPointer += 1;
	
	return firstIndex(arr, element);

}

int main() {
	
	int arr[6] = {5, 5, 6, 20, 5, 6};
	int index = firstIndex(arr, 5);
	
	cout << index;
	
}