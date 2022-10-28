#include<iostream>
using namespace std;
void display(int marks[][2], int r, int c)
{
for (int i=0; i<r;i++){
for (int j=0;j<c;j++){
  cout<<marks[i][j]<<" ";
  }
  cout<<endl;
}
}
int main(){

int A[][2]={
{ 12,14},
{15,18}
};
display(A,2,2);

}






//you must specify columns && this will not work


//#include<iostream>
//using namespace std;
//void display(int marks[][], int r, int c)
//{
//for (int i=0; i<r;i++){
//for (int j=0;j<c;j++){
//  cout<<marks[i][j]<<" ";
//  }
//  cout<<endl;
//}
//}
//int main(){
//
//int A[][2]={
//{ 12,14},
//{15,18}
//};
//display(A,2,2);
//}
