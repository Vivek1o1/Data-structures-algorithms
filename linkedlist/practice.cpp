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
int makecycle(Node* &head,int n){
    Node* temp=head;
    int counter=0;
    Node* cyclestartNode;
    while(temp->next!=NULL){
        if(counter==n){
            cyclestartNode=temp;
        }
        temp=temp->next;
        counter++;
    }
    temp->next=cyclestartNode;
    
}
bool cycledetection(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL and slow!=NULL and fast->next!=NULL){
        if(slow==fast){
            return true;
        }
        fast=fast->next->next;
        slow=slow->next;
    }
    return false;
}
int main(){
    Node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    makecycle(head,3);
    cout<<cycledetection(head);
    
    
}