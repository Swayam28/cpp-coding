#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
// traversing a linked list
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// gives length of a linked list
int getLength(Node *&head)
{
    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}
void insertAtHead(Node *&head, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
       
    }
    else{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
}
void insertAtTail(Node *&tail, int d)
{
    if(tail=NULL){
        Node* temp=new Node(d);
        tail=temp;
    }
    else{
    Node *temp = new Node(d);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
    }
}
void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // insert at end
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}
void deleteNode(int position,Node* &head){
    if(position==1){
        Node * temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* pre=NULL;
        int count=1;
        while(count<position){
            pre=curr;
            curr=curr->next;
            count++;
        }
        curr->prev=NULL;

 
        pre->next=curr->next;
        curr->next=NULL;
        
        
        
        delete curr;


    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    cout << getLength(head) << endl;
    insertAtHead(head, 9);
    print(head);
    insertAtHead(head, 11);
    print(head);
    insertAtTail(tail, 12);
    print(head);
    insertAtPosition(head, tail, 3, 24);
    print(head);
    deleteNode(2,head);
    print(head);

    return 0;
}
