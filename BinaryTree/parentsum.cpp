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

bool parentsum(Node* root){
    if(root==NULL || root->left == NULL and root->right == NULL){
        return true;
    }
    int leftSum,rightSum = 0;
    if(root->left){
        leftSum = root->left->data;
    }
    if(root->right){
        rightSum = root->right->data;
    }

    if(root->data == leftSum + rightSum){
        bool left = parentsum(root->left);
        bool right = parentsum(root->right);
        if(left == true and right == true){
            return true;
        }
    }
    return false;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(10);
    // root->right = new Node(20);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(15);
    // root->right->right = new Node(7);
    cout<<parentsum(root);
}