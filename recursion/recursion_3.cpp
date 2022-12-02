#include <bits/stdc++.h>

using namespace std;


void deleteElement(char* ar, int pos, int cur, int maxLen)
{
  if (cur < maxLen)
  {
    if ( cur == maxLen - 1 )
    {
      ar[cur] = 0; // last
      return;
    }
    else if ( cur > pos - 1 )
    {
      ar[cur] = ar[cur + 1];
    }
    deleteElement(ar, pos, ++cur, maxLen);
  }
}

char printer(char *arr, int index) {
	
	if(arr[index] == '\0') {
		return '\0';
	}
	
	cout << arr[index];
	return printer(arr, ++index);
	
}

char arrayFilter(char *arr, int index, char unwantedChar) {
	
	if(arr[index] == unwantedChar) {
		deleteElement(arr, index, 1, 9);
	}
	
	if(arr[index] == '\0'){
		return '\0';
	}
	
	return arrayFilter(arr, ++index, unwantedChar);
	
}

int main() {
	char arr[8] = {'a','a','a', 'b', 'c', 'd', 'a', 'a'};
	
	arrayFilter(arr, 0, 'a');
	printer(arr, 0);
}