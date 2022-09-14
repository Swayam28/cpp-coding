#include <bits/stdc++.h>
using namespace std;
class Complex
{
    private:
    int real;
    
    int img;
    public:
    void input(){
        cout<<"Enter real part"<<endl;
        cin>>real;
        cout<<"Enter img part"<<endl;
        cin>>img;   
    }
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    void add(Complex A,Complex B){
        cout<<"Sum of Complex numbers"<<endl;
        cout<<A.real+B.real<<"+"<<A.img+B.img<<"i"<<endl;
    }
    void mul(Complex A,Complex B){
        cout<<"Product of Complex numbers"<<endl;
        cout<<(A.real*B.real)-(A.img*B.img)<<"+"<<(A.real*B.img)+(A.img*B.real)<<"i"<<endl;
    }
};
int main() {
Complex A;
A.input();
A.display();
Complex B;
B.input();
B.display();

A.add(A,B);
A.mul(A,B);

    

    return 0;

}
