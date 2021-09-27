#include <bits/stdc++.h>
using namespace std;

class Node{
   public:
   int data;
   Node* next;

   Node(int val){
       next=NULL;
       data=val;
   }
};
void insertAtTail(Node* &head, int val){
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
void removeduplicates(Node* head){
    Node* ptr1=head;
    Node* ptr2=head;
    Node* duplicate;
    if(ptr1==NULL || ptr1->next==NULL){
        return;
    }
    while(ptr2->next!=NULL){
        if(ptr1->data==ptr2->next->data){
            duplicate=ptr2->next;
            ptr2=ptr2->next->next;
            delete(duplicate);
        }
        else{
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
    }
}
int main(){
    Node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,3);
    removeduplicates(head);
    display(head);
}