#include <bits/stdc++.h>
using namespace std;
class nstacks{
    int* arr;
    int* top;
    int size;
    int num_stacks;
    public:
    nstacks(int num_stacks,int size){
        this->num_stacks=num_stacks;
        this->size=size;
        arr=new int[num_stacks*size];
        top=new int[num_stacks];

        for(int i=0;i<num_stacks;i++){
            top[i]=-1+i*size;
        }
    }
    void push(int stack_num,int data){
        if(top[stack_num]<-1*num_stacks*size){top[stack_num]++;arr[top[stack_num]]=data;}
    }
    void pop(int stack_num){
        if(top[stack_num]>-1+stack_num*size){
            cout<<"Popped "<<arr[top[stack_num]]<<endl;
            top[stack_num]--;
        }
        else{cout<<"underflow in Stack "<<stack_num<<endl;return;}
    }
    void peek(int stack_num){
        if(top[stack_num]>-1+stack_num*size){
        cout<<"Top element of stack "<<stack_num<<" is: "<<top[stack_num]<<endl;
        }
        else{cout<<"No element in stack "<<stack_num<<endl;}
        }
};
int main() {
nstacks A(3,2);
A.pop(0);
A.pop(1);
A.pop(2);

A.peek(0);
A.peek(1);
A.peek(2);

A.push(11,1);
A.push(11,2);
A.push(11,3);


A.push(21,1);
A.push(21,2);
A.push(21,3);

    A.pop(2);
    A.pop(1);
    A.pop(0);

    return 0;

}
