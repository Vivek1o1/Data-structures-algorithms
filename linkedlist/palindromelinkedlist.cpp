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
bool ispalindrome(Node* head){
     Node* temp=head;
     stack<int> s;
     while(temp!=NULL){
         s.push(temp->data);
         temp=temp->next;
     }
      temp=head;
     while(temp!=NULL){
         int top= s.top();
         s.pop();

         if(top!=temp->data){
             return false;
         }
         temp=temp->next;
     }
     return true;

}
int main(){
   Node* head=NULL;
   insertAtTail(head,10);
   insertAtTail(head,20);
   insertAtTail(head,30);
   insertAtTail(head,40);
   insertAtTail(head,30);
   insertAtTail(head,20);
   insertAtTail(head,10);
   display(head);
   cout<<ispalindrome(head);
}