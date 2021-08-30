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
    Node* n= new Node(val);
    Node* temp= head;

    if( head==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void displayLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

Node* reverseKNodes(Node* &head,int k){
    Node* current = head;
    Node* previous = NULL;
    Node* nextPtr;
    int counter = 0;
    while(current != NULL and counter < k){
        nextPtr = current->next;
        current->next = previous;
        previous = current;
        current = nextPtr;
        counter++;
    }
    if(nextPtr){
        head->next = reverseKNodes(nextPtr,k);
    }
    return previous;
}
int main(){
    Node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    displayLL(head);
    head = reverseKNodes(head,2);
    displayLL(head);
}
