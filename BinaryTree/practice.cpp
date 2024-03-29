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
void levelordertraversal(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* front=q.front();
        q.pop();
        if(front!=NULL){
            cout<<front->data<<" ";
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
        else if(!q.empty()){
            cout<<endl;
            q.push(NULL);
            
        }
    }
}
int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    levelordertraversal(root);
    cout<<endl;
}