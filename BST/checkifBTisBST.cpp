#include <bits/stdc++.h>
using namespace std;

class Node{
   public:
   int data;
   Node* left;
   Node* right;

   Node(int val){
       data=val;
       left=NULL;
       right=NULL;
   }
};
bool checkBST(Node* root){
    if(root==NULL){
        return 1;
    }
    if(root->left!=NULL and root->left->data>=root->data){
        return 0;
    }
    if(root->right!=NULL and root->right->data<=root->data){
        return 0;
    }
   
    if(!checkBST(root->left) || !checkBST(root->right) ){
        return 0;
    }
    return 1;
}
 void preordertraversal(Node* root){
        if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
        preordertraversal(root->left);
        preordertraversal(root->right);
    }
int main(){
    Node* root=new Node(4);
    root->left= new Node(2);
    root->right= new Node(6);
    root->left->left= new Node(1);
    root->left->right= new Node(3);
    root->right->left= new Node(5);
    root->right->right= new Node(7);
    preordertraversal(root);
    cout<<endl;
    cout<<checkBST(root);
}


!isBST