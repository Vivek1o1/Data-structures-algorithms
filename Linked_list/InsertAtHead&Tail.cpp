#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
};

void insertAtHead(Node* &head,int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
}
void insertAtTail(Node* &head,int val){
    Node* n = new Node(val);
    Node* temp = head; // to traverse
    // edge case what if head is null
    if(head==NULL){
        n->next = head;
        head = n;
        return;
    }
    // traverse till last node
    while(temp->next != NULL){
        temp = temp->next;
    }
    // point the pointer of the last node to the new node;
    temp->next = n; 
}
void displayNode(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtHead(head,0);
    displayNode(head);
}
