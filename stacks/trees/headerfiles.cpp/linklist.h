#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
      this->data=data;
      this->next=NULL;
    }
 void nodeathead(node* &head,int data){
   node* temp=new node(data);
   temp->next=head;
   head=temp;
 }
 void nodeattail(node* &tail,int data){
    node* temp=new node(data);
    tail->next=temp;
    tail=temp;
 }
 void traverse(node* head){
     node* temp=head;
     while(!temp==NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
     }
 }
 int deletehead(node* &head){

 }
 int deletetail(node* &tail){

 }
 void insertany(){

 }
 int daleteany(){
   
 }
};
