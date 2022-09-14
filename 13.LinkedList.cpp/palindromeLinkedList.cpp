#include <iostream>
#include <stack>

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

void deletee(node* &head,int k){

    node* temp=head;
    node* prev=temp;
    if(temp->data==k){
        head=head->next;
        free(temp);
        return;
    }
    while(temp->data!=k){
            if(temp==NULL){
                return;
            }
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    free(temp);

}

bool checkpalindrome(node* &head){

    stack<int> st;
    node* temp=head;
    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }

    temp=head;

    while(!st.empty()){
        if(temp->data!=st.top()){
            return false;
        }
        else{
            temp=temp->next;
            st.pop();
        }
    }
    return true;

}

int main()
{
    cout<<"enter length of linked list: "<<endl;
    int n;
    cin>>n;
    cout<<"enter 0 value: "<<endl;
    int k;
    cin>>k;
    node* head=new node(k);
    node* temp=head;
    for(int i=1;i<n;i++){
        cout<<"enter "<<i<<" value: "<<endl;
        int j;
        cin>>j;
        temp->next=new node(j);
        temp=temp->next;
    }
    display(head);

    if(checkpalindrome(head)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False";
    }

    return 0;
}