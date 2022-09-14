#include <bits/stdc++.h>
using namespace std;

class twostacks{
    int *arr;
    int size;
    int top1,top2;
    public:
    twostacks(int size){
        this->size=size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }

void push1(int data){
    if(top1>0){top1--;arr[top1]=data;}
    else{cout<<"Stack Overflow in stack 1\n";
    return;}
}
void push2(int data){
    if(top2<size-1){top2++,arr[top2]=data;}
    else{cout<<"Stack overflow in stack2\n";return;}
}
void pop1(){
    if(top1<size/2){
        cout<<"popped"<<arr[top1]<<endl;
        top1++;
    }
    else{cout<<"Stack underflow in stack 1\n";return;}
}
void pop1(){
    if(top2>size/2-1){
        cout<<"popped"<<arr[top2]<<endl;
        top2--;
    }
    else{cout<<"Stack underflow in stack 2\n";return;}
}
void Top(){
    cout<<"Top element in stack 1 is: "<<arr[top1]<<endl;
    cout<<"Top element in stack 2 is: "<<arr[top2]<<endl;
}
};
int main() {
twostacks A(9);
A.push1(1);
A.push1(2);
A.push1(3);
A.push1(4);
A.push1(5);
A.push1(6);
A.push2(1);
A.push2(2);
A.push2(3);
A.push2(4);
A.push2(5);
A.push2(6);


    

    return 0;

}
