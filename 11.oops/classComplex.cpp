#include <bits/stdc++.h>
using namespace std;
class Complexx{
    public:
    int real;
    int img;
    Complexx(){
        real=0;
        img=0;
    }
    Complexx(int a,int b){
        real=a;
        img=b;

    }
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    Complexx operator +(Complexx c2){
        Complexx res;
        res.real=real+c2.real;
        res.img=img+c2.img;
        return res;
    }
    Complexx operator ()(int a,int b,int c,int d){
        Complexx ans;
        ans.real=a+b+c;
        ans.img=b+c+d;
        return ans;
    }
};
int main() {
    Complexx a(2,3),b(4,5),c,d;
    c=a+b;
    c.display();
    d=a(2,3,4,5);
    d.display();
    return 0;

    


}
