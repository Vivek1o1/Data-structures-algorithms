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

int SumOfBT(Node* root){
    static int sum = 0;
    if(root==NULL){
        return 0;
    }
    sum += root->data;
    int left = SumOfBT(root->left);
    int right = SumOfBT(root->right);
    return sum;
}
void SumOfBTInorder(Node* root,int &sum){
    if(root==NULL){
        return;
    }
    SumOfBTInorder(root->left,sum);
    sum += root->data;
    SumOfBTInorder(root->right,sum);
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    int sum = 0;
    SumOfBTInorder(root,sum);
    cout<<sum;
    
}