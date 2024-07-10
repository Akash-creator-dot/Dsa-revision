//  #include<bits/stdc++.h>
// using namespace std;
// class stacks{
// public:
// int *arr;
// int top;
// int size; 
// stacks(int size){
//     this->size=size;
//     top=-1;
//     arr=new int[size];
// }
// void push(int element){
//   if(top==size-1){
//     cout<<"The stack is overloaded"<<endl;
//     exit(1);
//   }else{
//     top++;
//     arr[top]=element;
//   }
// }
// int pop(){
//     if(top==-1){
//         cout<<"Stack is underloaded"<<endl;
//         exit(1);
//     }else{
//         int a=arr[top];
//         top--;
//         return a;
//     }
// }
// int peek(){
//     if(top==-1){
//         cout<<"Stack is empty"<<endl;
//         exit(1);
//     }else{
//         return arr[top];
//     }
// }
// bool isempty(){
// if(top==-1){
//     return true;
// }else{
//     return false;
// }
// }
// };