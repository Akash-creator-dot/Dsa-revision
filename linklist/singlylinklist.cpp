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
};
   void inshead(node* &head,int data){
        node* temp=new node(data);
        temp->next=head;
        head=temp;
    }
    void instail(node* &tail,int data){
        node* temp=new node(data);
        tail->next=temp;
        tail=temp;
    }
    void traverse(node* &head){
        node* temp;
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
int main(){
 node* head=new node(12);
 node*tail=head;
instail(tail,312);
instail(tail,312);
instail(tail,312);
instail(tail,312);
instail(tail,312);
instail(tail,312);
instail(tail,312);
instail(tail,312);
instail(tail,312);
instail(tail,312);
instail(tail,312);
traverse(head);

}