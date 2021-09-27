#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int v)
    {
        val = v;
        next = NULL;
    }
};

void insertAtTail(Node *&head, int v)
{
    Node *n = new Node(v);
    Node *temp = head;

    if (head == NULL)
    {
        head = n;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


int length(Node* head){
    Node* temp = head;
    int counter = 0;
    if(head == NULL){
        return 0;
    }
    while(temp != NULL){
        counter++;
        temp = temp->next;
    }
    return counter;
}

  int intersection(Node* &head1,Node* &head2){
    int l1 = length(head1);
    int l2 = length(head2);
    Node* bda;
    Node* chota;
    int diff;
    // l1>l2;
    if(l1>l2){
        bda = head1;
        chota = head2;
        diff = l1-l2;
    }
    // l2 > l1;
    if(l2>l1){
        bda = head2;
        chota = head1;
        diff = l2-l1;
    }
    // 
    while(diff){
        bda = bda->next;
        if(bda!=NULL){
            return -1;
        }
        diff--;
    }
    while(bda!= NULL and chota != NULL){
        if(bda == chota){
            return bda;
        }
        bda = bda->next;
        chota = chota->next;
    }
    return -1;
}
int main()
{
    Node *head1 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    display(head1);
    Node *head2 = NULL;
    insertAtTail(head2, 15);
    insertAtTail(head2, 10);
    insertAtTail(head2, 5); 
    insertAtTail(head2, 6); 
    insertAtTail(head2, 7); 
    insertAtTail(head2, 8); 
    display(head2);
    cout<<intersection(head1,head2)->val<<endl;
}