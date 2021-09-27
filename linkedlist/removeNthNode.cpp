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
    if (head == NULL){
     head = n;
     return;
    }
    while (temp->next != NULL){
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

Node* removeNthNode(Node* &head,int n){
    int lengthOfLL = length(head);
    int d = lengthOfLL - n;
    Node* temp = head;
    int counter = 1;
    if(lengthOfLL == n){
        head = head->next;
        return head;
    }
    while(temp != NULL and counter <= d ){
        if(counter==d){
            break;
        }
        temp =temp->next;
        counter++;
    }
    Node* toBeDelted = temp->next;
    temp->next = temp->next->next;
    delete(toBeDelted);
    return head;
}
int main()
{
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);
    removeNthNode(head,2);
    display(head);
}