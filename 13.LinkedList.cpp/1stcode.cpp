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

    node(){
    }

};

void display(node* n){

    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
    cout<<endl;

}

void frontt(node* &head,int d){

    node* n1=new node(d);
    n1->next=head;
    head=n1;

}

void insertt(node* &head,int ele,int k){

    node* temp=head;
    while(temp->data!=ele){
        if(temp->next==NULL){
            cout<<"element not found"<<endl;
            return;
        }
        temp=temp->next;
    }
    node* n=new node(k);
    n->next=temp->next;
    temp->next=n;

}

void backk(node* &head,int d){

    if(head==NULL){
        head=new node(d);
        return;
    }

    node* n1=head;

    while(n1->next!=NULL){
        n1=n1->next;
    }
    n1->next=new node(d);


}

int main()
{
    node* head=new node();
    node* second=new node();
    node* third=new node();
    node* forth=new node();
    node* fifth=new node();

    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=forth;
    forth->data=4;
    forth->next=fifth;
    fifth->data=5;
    fifth->next=NULL;

    display(head);

    frontt(head,7);
    frontt(head,8);
    display(head);

    backk(head,9);
    backk(head,10);
    display(head);

    node* temp;
    backk(temp,6);
    display(temp);

    insertt(head,4,11);
    display(head);

    return 0;
}