#include <iostream>
using namespace std;
int main(){
    int n, r,i;
    cout<<"enter n"<<endl;
    cin>>n;
    while(n>0){
        r=n%10;
        n=n/10;
        cout<<r<<endl;
        for( i=2;i<=r;i++){
            if(r%i==0){
                cout<<"not prime";
            }
            
        }
        if(i==r){
            cout<<"prime";
        }
    }

    return 0;
}