#include <bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node* next;
Node(int dat){
    data=dat;
    next=NULL;
}
};
void front(Node* &last,int NodeValue){
    Node* n=new Node(NodeValue);

    n->next=last->next;
    last->next=n;


}
void backk(Node* &last,int NodeValue){
    Node* n=new Node(NodeValue);
    n->next=last->next;
    last->next=n;
    last=n;


}
void insert(Node* &last,int newData,int Nodeval){
    Node* temp=last->next;
    Node* n=new Node(newData);
    while(temp->data!=Nodeval){
        temp=temp->next;
        if(temp==last->next){
            cout<<"Not Found";
            return;

        }
    }
        n->next=temp->next;
        temp->next=n;
}
void del(Node* last,int d){

    Node* temp=last->next;
    if(last->data==d){
        while(temp->next!=last){
            temp=temp->next;
        }
        Node* n=last;
        temp->next=last->next;
        last=last->next;
        free(n);
    }

    Node* prev=temp;
    while(temp->data!=d){
        prev=temp;
        temp=temp->next;
        if(temp==last->next){
            cout<<"node not found"<<endl;
            return;
        }
    }
    prev->next=temp->next;
    free(temp);

}
void display(Node* & last){
    Node* temp=last;
    do{temp=temp->next;
    cout<<temp->data<<" ";


    }
    while(temp!=last);
    cout<<endl;
}
int main() {
Node* last=new Node(5);
last->next=last;
front(last,10);
display(last);
front(last,11);
display(last);
front(last,13);
display(last);
front(last,22);
display(last);
backk(last,6);
display(last);
backk(last,8);
display(last);
backk(last,9);
display(last);
insert(last,30,11);
display(last);
del(last,5);
display(last);

    

    return 0;

}
