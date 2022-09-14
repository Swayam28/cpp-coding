#include <bits/stdc++.h>
using namespace std;
class Integer{
public:
int x;
Integer(int x){
this->x=x;
}
void display(){
    cout<<x<<endl;
}
operator int(){
    return x;
}
};
int main() {

    Integer i=50;//basic to class
    i.display();
    int y=i; //class to basic
    cout<<y<<endl;
    

    return 0;

}
