#include <bits/stdc++.h>
using namespace std;

// [data,next(next node ki memory location rkhta )]->[data,next(next node ki memory location rkhta )]->null

class Node{
    public:
        int data;
        Node* next;
    
    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node* &head,int val){
    Node* n = new Node(val); // [val,next->NULL]
    if(head==NULL){
        head = n;
        return;
    }
    // temp
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    // while k khtm hone k bad hm last node p honge
    temp->next = n;
}

void displayLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int sizeOfLinkedList(Node* head){
    int counter = 0;
    if(head==NULL){
        return 0;
    }
    Node* temp = head;
    while(temp!=NULL){
        counter++;
        temp = temp->next;
    }
    return counter;
}

void middleOfLinkedList(Node* head){
    int size = sizeOfLinkedList(head);
    int mid = size / 2;
    int counter = 0;
    Node* temp = head;
    while(temp!=NULL && counter <= mid){
        counter++;
        if(counter == mid){
            cout<<temp->data<<" ";
        }
        temp = temp->next;
    }
    // cout<<temp->data<<" ";
}
void insertAtHead(Node* &head,int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

void deleteANode(Node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->data == val){
        Node* toBeDelted = head;
        head = head->next;
        delete(toBeDelted);
        return;
    }
    Node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    Node* toBeDelted = temp->next;
    temp->next = temp->next->next;
    delete(toBeDelted);
}
int main(){
    // null
    Node* head = NULL;
    insertAtTail(head,1);
    // head = 1 wala node
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    displayLL(head);
    deleteANode(head,1);
    displayLL(head);
    cout<<sizeOfLinkedList(head)<<endl;
    middleOfLinkedList(head);
    
}