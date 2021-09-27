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

int maxWidth(Node* root){
    if(root==NULL){
        return 0;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int w = 1;
    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        if(front!=NULL){
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        } else if(!q.empty()){
            if(q.size() > w){
                w = q.size();
            }
            q.push(NULL);
        }
    }
    return w;
}
int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(60);
    root->right->right = new Node(60);
    root->right->left = new Node(60);
    cout<<maxWidth(root);
}