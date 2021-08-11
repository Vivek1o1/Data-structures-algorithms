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


void deleteANode(Node* head,int val){
    if(head==NULL){
        return;
    }
    if(head->data==val){
        Node* tobedeleted=head;
        head=head->next;
        delete(tobedeleted);
        return;
    }
    Node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    Node* tobedeleted=temp->next;
    temp->next=temp->next->next;
    delete(tobedeleted);
    
}

displayNode(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
     return 0;
}
int main(){
    Node* head=NULL;
    insertAtTail(head,5);
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    deleteANode(head,5);
    displayNode(head);
}
