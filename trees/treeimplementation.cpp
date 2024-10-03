#include<iostream>
using namespace std;

class node {
    int data;
    node* left;
    node* right;
public:
    // Constructor
    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    node* createtree() {
        cout << "Enter the data for node: ";
        int data;
        cin >> data;
        if (data == -1) {
            return NULL;
        }

        node* root = new node(data);

        cout << "Enter the data for left part of node " << data << " (enter -1 for no node): ";
        root->left = createtree();

        cout << "Enter the data for right part of node " << data << " (enter -1 for no node): ";
        root->right = createtree();

        return root;
    }
};

int main() {
    node* root = NULL;
    root = root->createtree();
    return 0;
}
