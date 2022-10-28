#include<iostream>
using namespace std;

void mostAppearence(int nums[], int size){
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
 
int main(){
    int nums[] = {33, 22, 33, 22, 44, 44, 5, 44};
    int n = sizeof(nums)/sizeof(nums[0]);
    mostAppearence(nums, n);
}