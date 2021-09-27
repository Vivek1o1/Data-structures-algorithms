#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void levelOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(q.empty() == false){
        Node* front = q.front();
        q.pop();
        cout<<front->data<<" ";
        if(front->left){
            q.push(front->left);
        }
        if(front->right){
            q.push(front->right);
        }
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
    levelOrderTraversal(root);
    
}