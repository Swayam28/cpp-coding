#include <iostream>

using namespace std;

class node{

public:
    int data;
    node* next;

    node(int d){
        data=d;
        next=NULL;
    }

};

void endd(node* &head,int d){

    node* n=new node(d);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;

}

void display(node* head){

    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

node* mergee(node* &head1,node* &head2){

    node* temp1=head1;
    node* temp2=head2;
    node* newnode=new node(-1);
    node* temp3=newnode;

    while(temp1!=NULL && temp2!=NULL){

            if(temp1->data<temp2->data){
                temp3->next=temp1;
                temp1=temp1->next;
            }
            else{
                temp3->next=temp2;
                temp2=temp2->next;
            }
            temp3=temp3->next;

    }

    while(temp1!=NULL){
        temp3->next=temp1;
        temp1=temp1->next;
        temp3=temp3->next;
    }
    while(temp2!=NULL){
        temp3->next=temp2;
        temp2=temp2->next;
        temp3=temp3->next;
    }

    return newnode->next;

}

int main()
{
    node* head1=new node(1);
    endd(head1,4);
    endd(head1,5);
    endd(head1,7);
    cout<<"List1 is: ";
    display(head1);

    node* head2=new node(2);
    endd(head2,3);
    endd(head2,6);
    endd(head2,8);
    endd(head2,9);
    cout<<"List2 is: ";
    display(head2);

    node* head3=mergee(head1,head2);
    cout<<"merged list is: ";
    display(head3);
    return 0;
}