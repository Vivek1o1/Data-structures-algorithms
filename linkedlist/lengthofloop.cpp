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
void makecycle(Node* head,int k){
    int counter=0;
    Node* temp=head;
    Node* cyclestartNode;
    while(temp->next!=NULL){
        if(counter==k){
            cyclestartNode=temp;
        }
        counter++;
        temp=temp->next;
    }
    temp->next=cyclestartNode;
    
}
void cycleorigin(Node* head){
    int counter=1;
    Node* temp;
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL and fast!=NULL || fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            slow=head;
        }
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        temp=slow;
        while(temp!=fast){
            temp=temp->next;
            counter++
        }
    }
    return counter;
}
int main(){
    Node* head= NULL;
     insertAtTail(head,1);
     insertAtTail(head,2);
     insertAtTail(head,3);
     insertAtTail(head,4);
     insertAtTail(head,5);
     displayNode(head);
     makecycle(head,2);
     displayNode(head);
     
}
