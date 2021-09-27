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

int search_in_bst(Node* root,int val){
    if(root==NULL){
        return -1;
    }
    if(root->data == val){
        return root->data;
    }
    int left = search_in_bst(root->left,val);
    int right = search_in_bst(root->right,val);
    if(left == -1 and right == -1){
        return -1;
    }
    if(left == -1){
        return right;
    }
    if(right == -1){
        return left;
    }
    return -1;
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
   insertion(root,4);
   insertion(root,5);
   cout<<search_in_bst(root,11);
//    preorder_traversal(root);   
}
