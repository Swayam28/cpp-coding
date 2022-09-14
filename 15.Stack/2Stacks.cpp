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
        if(top1<top2-1){top1++;arr[top1]=data;}
        else{cout<<"Stack Overflow in Stack 1\n";return;}
    }
    void push2(int data){
        if(top2<top2-1){top2--;arr[top2]=data;}
        else{cout<<"Stack Overflow in Stack 1\n";return;}
    }
    void pop1(){
        if(top1<=0){cout<<"Popped "<<arr[top1]<<endl;top1--;}
        else{cout<<"Stack Underflow in Stack 1\n";return;}
    }
    void pop2(){
        if(top2<size){cout<<"Popped "<<arr[top2]<<endl;top2++;}
        else{cout<<"Stack Underflow in Stack 1\n";return;}
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
A.pop1();
A.pop2();
A.Top();


    return 0;

}
