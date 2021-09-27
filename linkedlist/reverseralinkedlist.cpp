#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(Node* &head,int val){
    Node* n=new Node(val);
    Node* temp=head;
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
   temp->next=n;
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}





Node* reverse(Node* &head){
    Node* current = head;
    Node* previous = NULL;
    Node* nextPointer;
    while(current!=NULL){
        // store the value of next of the current 
        nextPointer = current->next; 
        // point the pointer of the current to its previous node
        // intital value of previous is null because after reversing list our first will be last and last points to the null
        current->next = previous;
        // move the previous pointer by one
        previous= current;
        // move the current pointer to the next value
        current = nextPointer;
    }
    // after the loop our last previous will be the first element
    return previous; 
}

int main(){
    Node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    cout<<reverse(head);
    display(head);



}