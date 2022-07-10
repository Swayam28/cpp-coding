#include <iostream>
using namespace std;
int fac(int a){
    int factorial=1;
    for(int i=2;i<=a;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;
    cout<<fac(n);
    return 0;
}