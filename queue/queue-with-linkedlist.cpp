#include<iostream>
using namespace std;
//Use a template to make a queue of any data Type
template<typename T>
class Queue{
T *arr;
int nextIndex;
int firstIndex;
int size;
int capacity;
public:
Queue(){
capacity = 5;
arr = new T[capacity];
nextIndex = 0;
firstIndex = -1;
size = 0;
}
Queue(int cap){
capacity = cap;
arr = new T[capacity];
nextIndex = 0;
firstIndex = -1;
size = 0;
}
/// insert element
void enqueue(T ele){
if(size == capacity){
cout<<"Queue full"<<endl;
return;
}
arr[nextIndex] = ele;
nextIndex = (nextIndex + 1)%capacity;
if(firstIndex == -1){
firstIndex = 0;
}
size++;
}

int getSize(){
return size;
}
bool isEmpty(){
return size==0;
}
T front(){
if(isEmpty()){
cout<<"Queue empty"<<endl;
return 0;
}
return arr[firstIndex];
}
void dequeue(){
if(isEmpty()){
cout<<"Queue empty"<<endl;
return;
}
firstIndex = (firstIndex + 1)%capacity;
size--;
}
};

int main(){
Queue<int> q(5);
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
q.enqueue(50);
q.enqueue(60);
q.enqueue(70);
cout<<q.front()<<endl;
q.dequeue();
q.dequeue();
q.dequeue();
cout<<q.front()<<endl;
cout<<q.getSize()<<endl;
cout<<q.isEmpty()<<endl;
q.enqueue(60);
q.enqueue(70);
q.dequeue();
q.dequeue();
cout<<q.front()<<endl;
cout<<q.getSize()<<endl;