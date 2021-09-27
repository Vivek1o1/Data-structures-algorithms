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
void insertAtTail(Node* &head, int val){
    Node* n= new Node(val);
    Node* temp= head;

    if(head==NULL){
    
        head=n;
        return;
    }
      while(temp->next!=NULL){
          temp=temp->next;
      }
       temp->next=n;
}

void displayNode(Node* head){
    Node* temp=head;
      while(temp!=NULL){
          cout<<temp->data<<"->";
          temp=temp->next;
      }
      cout<<"NULL"<<endl;
}
int main(){
    Node* head= NULL;
     insertAtTail(head,1);
     insertAtTail(head,2);
     insertAtTail(head,3);
     insertAtTail(head,4);
     insertAtTail(head,5);
     displayNode(head);
     
}
