#include <bits/stdc++.h>
using namespace std;
class errorr{
    int er;
    public:
    errorr(int a){
        er=a;
    }
    void display(){
        cout<<"Error Code "<<er<<endl;
    }
};
int main() {
int x;
cin>>x;
try{
    if(x>0){
        throw errorr(x);
    }
    else{
        cout<<"EMJOY"<<endl;
    }
}
catch(errorr e){
    e.display();

}
//     errorr E1(x);
// E1.display();
    return 0;

}
