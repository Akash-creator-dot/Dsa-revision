#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    node* left;
    node* right; 
    int data;
    node(int data){
      this->left=NULL;
      this->right=NULL;
      this->data=data;
    }
    node* buildtree(node* root){
      cout<<"Enter the data"<<endl;
      int data;
      cin>>data;
      if(data==-1){
        return NULL;
      }
      root->data=data;
      cout<<"Enter the data for left part of "<<data<<endl;
      buildtree(root->left);
      cout<<"Enter the data for right part of "<<data<<endl;
      buildtree(root->right);
    }
    void inorder(node* root){
        if(root==NULL){
            return;
        }
       inorder(root->left);
       cout<<root->data<<" ";
       inorder(root->right);
    }
    void preorder(node* root){
       if(root==NULL){
        return;
       }
       cout<<root->data<<" ";
       preorder(root->left);
       preorder(root->right);
    }
    void postorder(node* root){
       if(root==NULL){
        return;
       }
       postorder(root->left);
       postorder(root->right);
       cout<<root->data<<" ";
    }
    void levelordertraversal(node* root){
        if(root==NULL){
            return;
        }
      queue<node*>q;
      q.push(root);
      q.push(NULL);
      while(!q.empty()){
        node* front=q.front();
         q.pop();
         if(front==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
         }else{
              cout<<front->data;
       if(front->left){
        q.push(front->left);
       }
       if(front->right){
        q.push(front->right);
       }
         }
      }
      }
};