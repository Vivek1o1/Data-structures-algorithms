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

void inorderTraversal(Node* root){
    if(root == NULL){
        return;
    }
     inorderTraversal(root->left);
     cout<<root->data<<" ";
     inorderTraversal(root->right);
}

void preorderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
   
}

bool isIdentical(Node* root1,Node* root2){
    if(root1 == NULL and root2 == NULL){
        return true;
    }
    if(root1 and root2){
        if(root1->data != root2->data){
            return false;
        }
        bool left = isIdentical(root1->left,root2->left);
        bool right = isIdentical(root1->right,root2->right);
        if(left == true and right == true){
            return true;
        }
    }
    return false;
}

int main(){
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);
    root1->right->left = new Node(6);
    root1->right->right = new Node(7);

    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(55);
    root2->right->left = new Node(6);
    root2->right->right = new Node(7);
    if(isIdentical(root1,root2)){
        cout<<"identical trees\n";
    }else{
        cout<<"Not identical Trees\n";
    }

}