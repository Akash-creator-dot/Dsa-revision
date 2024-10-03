#include<iostream>
using namespace std;
class stack{
    public:
    int data;
    int top;
    int *arr;
    int size;
    stack(int size){
        this->data=data;
        int *arr=new int[size];
        top=-1;
    }
    void push(int data){
      if(top>=size){
         cout<<"Stack overflow"<<endl;
         exit(1);
      }
      else{
        arr[top]=data;
        top++;
      }
    }
    int pop(){
       if(top==-1){
        cout<<"Stack Underflows"<<endl;
        exit(1);
       }else{
        int x=arr[top];
        top--;
        return x;
       }
    }
    bool isempty(){
       if(top==-1){
        return true;
       }else{
        return false;
       }
    }
    int size(){
       return top+1;
    }
    int top(){
        
    }
};
