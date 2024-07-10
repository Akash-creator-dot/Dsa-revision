// #include<bits/stdc++.h>
// using namespace std;
// //implementation
// class node{
//     public:
//     node *left;
//     node *right;
//     int data;
//     node(int data){
//         this->data=data;
//         this->left=nullptr;
//         this->right=nullptr;
//     } 
// };
// void inorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// void preorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void postorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }
//  node* buildtree(node* &root){
//      cout<<"Enter the data"<<endl;
//      int data;
//      cin>>data;
//      root=new node(data);
//      if(data==-1){
//         return NULL;
//      } 
//      cout<<"Enter the data for the left part"<<data<<endl;
//      root->left=buildtree(root->left);
//      cout<<"Enter the data for the right part"<<data<<endl;
//      root->right=buildtree(root->right);
//      return root;
//     }
//     void levelordertraversal(node* root){
//      queue<node*>q;
//      q.push(root);
//      q.push(NULL);
//      while(!q.empty()){
//         node* temp=q.front();
//            q.pop();
//         if(temp==NULL){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }else{
//              cout<<temp->data<<" ";
//         if(temp->left!=NULL){
//             q.push(temp->left);
//         }
//         if(temp->right!=NULL){
//             q.push(temp->right);
//         }
//         }
//      }
//     }
//     void buildfromlot(node* &root){
//     int data;
//     cout<<"Enter the data"<<endl;
//     cin>>data;
//     root=new node(data);
//     queue<node*>q;
//     q.push(root);
//     while(!q.empty()){
//         int leftdata;
//         node* temp=q.front();
//         q.pop();
//         cout<<"Enter the data for left of "<<temp->data<<endl;
//         cin>>leftdata;
//         if(leftdata!=-1){
//             temp->left=new node(leftdata);
//             q.push(temp->left);
//         }
//         cout<<"Enter the data for right of "<<temp->data<<endl;
//         int rightdata;
//         cin>>rightdata;
//         if(rightdata!=-1){
//             temp->right=new node(rightdata);
//             q.push(temp->right);
//         }
//     }
// }
// int main(){
//     node* root=NULL;
//     // buildtree(root);
//     buildfromlot(root);
//     levelordertraversal(root);
//     // inorder(root);
//     // cout<<endl;
//     // preorder(root);
//     // cout<<endl;
//     // postorder(root);
// }