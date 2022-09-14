#include <iostream>

using namespace std;

class node{

public:
    int data;
    node* next;
    node* prev;

    node(int d){
        data=d;
    }

};

void frontt(node* &head,int d){

    if(head==NULL){
        head=new node(d);
        head->next=head;
        head->prev=head;
    }
    else{
        node* n=new node(d);
        node* last=head->prev;
        n->prev=last;
        n->next=head;
        last->next=n;
        head->prev=n;
        head=n;
    }

}

void backk(node* &head,int d){

    if(head==NULL){
        head=new node(d);
        head->next=head;
        head->prev=head;
    }
    else{
        node* last=head->prev;
        node* n=new node(d);
        n->next=head;
        n->prev=last;
        last->next=n;
        head->prev=n;
    }

}

void insertt(node* &head,int bef,int d){

    node* n=new node(d);
    node* temp=head;

    while(temp->data!=bef){
        temp=temp->next;
        if(temp->next==head){
            cout<<"data not found"<<endl;
            return;
        }
    }

    n->prev=temp;
    n->next=temp->next;
    temp->next->prev=n;
    temp->next=n;

}

void display(node* head){

    node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);
    cout<<endl;

}

int main()
{
    node* head=new node(5);
    head->next=head;
    head->prev=head;

    backk(head,6);
    backk(head,7);
    backk(head,8);

    display(head);

    frontt(head,4);
    frontt(head,3);
    frontt(head,2);
    frontt(head,1);

    display(head);

    insertt(head,5,11);

    display(head);

    return 0;
}