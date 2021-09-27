#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};

Node* insertion(Node* &root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(root->data > val){
        root->left = insertion(root->left,val);
    } else if(root->data < val){
        root->right = insertion(root->right,val);
    }
    return root;
}
void preorder_traversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}
int main(){
   Node* root = NULL;
   root = insertion(root,2);
   insertion(root,1);
   insertion(root,3);
   preorder_traversal(root);   
}
