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

int heightOfBT(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftHeight = heightOfBT(root->left);
    int rightHeight = heightOfBT(root->right);
    return max(leftHeight,rightHeight) + 1;
}
int height(Node* root){
     if(root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right)) + 1;
}
int main()
{
    Node *root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
    cout<<heightOfBT(root);
}