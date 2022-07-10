#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    for( i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<"non prime";
            break;
        }
    }
    if(i==n){
        cout<<"prime";
    }
    
    return 0;
}
