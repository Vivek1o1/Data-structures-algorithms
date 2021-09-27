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

void MakeCycle(Node* &head,int k){
    int counter = 0;
    Node* temp = head;
    Node* cycleStartNode;
    while(temp->next != NULL){
        if(counter==k){
            cycleStartNode = temp;
        }
        temp = temp->next;
        counter++;
    }
    temp->next = cycleStartNode;
}

bool cycleDetection(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}

Node* floydsCycleOrign(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            slow = head;
            while(slow!=fast){
                slow =  slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
}
int main()
{
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    MakeCycle(head,2);
    display(head);
    // cout<<floydsCycleOrign(head)->val;
}