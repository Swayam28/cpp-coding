#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
    void print(Node *head){
        while (head->next!=NULL)
        {
            /* code */
        cout<<head->data;
        head=head->next;
        }
        
        
    }
};
int main()
{
    // Statically


    Node n1(1);//head

    Node *head=&n1;

    Node n2(2);

    n1.next = &n2;

    Node n3(3);

    n2.next=&n3;

    Node n4(4);

    n3.next=&n4;

    Node n5(5);//tail
    n4.next=&n5;

    print( head);
    

    
    // cout<<n1.data<<" "<<n2.data<<endl;

    // cout<<head->data;


    // //Dynamically
    // Node *n3=new Node(10);
    // Node *head=n3;

    // Node *n4=new Node(20); 
    // n3->next=n4;


    return 0;
}
