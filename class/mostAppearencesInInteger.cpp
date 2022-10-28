#include <bits/stdc++.h>

using namespace std;

void mostAppearence(char nums[], int size){
  int maxCount = 0;
  cout << "Most occurred number: ";
  for (int i=0; i<size; i++){
   int count=1;
   for (int j=i+1;j<size;j++)
       if (nums[i]==nums[j])
           count++;
   if (count>maxCount)
      maxCount = count;
  }
  
  for (int i=0;i<size;i++){
   int count=1;
   for (int j=i+1;j<size;j++)
       if (nums[i]==nums[j])
           count++;
   if (count==maxCount)
       cout << nums[i] <<" ";
  }
  
}

int main() {
	int integer = 12333;
	string integerString = to_string(integer);
	char integerChars[5];
	strcpy(integerChars, integerString.c_str());
	char * integerArr = strtok(integerChars, "");
	
	int size = sizeof(integerArr) / sizeof(char);
	
	mostAppearence(integerArr, size);
	
	
	return 0;
	
}




























