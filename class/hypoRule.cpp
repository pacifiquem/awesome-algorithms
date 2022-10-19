#include<bits/stdc++.h>
using namespace std;

int main(){
	
  cout << "Pairs that follow hypotenuse rule : " <<endl;
  int numberOfPairs = 0;
  for(int i = 1; i < 100;  i++){
    for(int j = i; j < 100; j++){
      int hypothenus = sqrt( pow(i, 2)  +  pow(j, 2));
      if(pow(hypothenus, 2) - pow(i,2) == pow(j,2)){
      	numberOfPairs++;
        cout << "(" << i << "," << j << ")" <<endl;
      }else{
        continue;
      }
    }
  }
  cout << numberOfPairs << " found !" <<endl;
  
    return 0;
}