#include <bits/stdc++.h>
using namespace std;
class integer{
public:
int x,y;
integer(){
    x=5;
    y=10;

}

void display(){
    cout<<"1st integer value is :"<<x<<endl;
    cout<<" 2nd integer value is :"<<y<<endl;

}
void add(){
    cout<<"The sum is "<<x+y<<endl;
}
~integer(){
    cout<<" Object is destroyed";
}
};
class complexx{
    public:
    int real1,img1;
    int real2,img2;
    complexx(int real,int img){
        real1=1;
        img1=2;
        real2=real;
        img2=img;
        cout<<"Sum is "<<real1+real2<<" + "<<img1+img2<<"i"<<endl;
    }

};
int main() {
integer v;
v.display();
v.add();
complexx c(5,4);


    return 0;

}
