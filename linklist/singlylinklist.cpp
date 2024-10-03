// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
//    void inshead(node* &head,int data){
//         node* temp=new node(data);
//         temp->next=head;
//         head=temp;
//     }
//     void instail(node* &tail,int data){
//         node* temp=new node(data);
//         tail->next=temp;
//         tail=temp;
//     }
//     void traverse(node* &head){
//         node* temp;
//         while(temp){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//     }
// int main(){
//  node* head=new node(12);
//  node*tail=head;
// instail(tail,312);
// instail(tail,312);
// instail(tail,312);
// instail(tail,312);
// instail(tail,312);
// instail(tail,312);
// instail(tail,312);
// instail(tail,312);
// instail(tail,312);
// instail(tail,312);
// instail(tail,312);
// traverse(head);

// }
#include<bits/stdc++.h>
using namespace std;
void fxn(string &s,int arr[],int size){
    for(int i=0;i<size;i++){
      if(arr[i]>0){
        char a=s[0];
        for(int j=1;j<s.length();j++){
            s[j]=s[j+1];
        }
        s[s.size()-1]=
      }
    }
}
int main(){
    string s="Hello";
    string r="Hello";
    int size=3;
    int arr[]={1,3,-2};
    fxn(s,arr,int size);
    if(s==r){
        cout<<"Password Accepted";
    }else{
        cout<<"Try Again";
    }

}