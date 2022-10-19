#include<bits/stdc++.h>
using namespace std;

int main(){
	
  cout << "Pairs that follow hypotenuse rule : " <<endl;
  for(int i = 1; i < 100;  i++){
    for(int j = i+1; j < 100; j++){
      int hypothenus = sqrt( pow(i, 2)  +  pow(j, 2));
      if(pow(hypothenus, 2) - pow(i,2) == pow(j,2)){
        cout << "(" << i << "," << j << ")" <<endl;
      }else{
        continue;
      }
    }
  }
    return 0;
}