#include <iostream>
using namespace std;
int fact(int x){
    int factorial=1;
    for(int i=1;i<=x;i++){
        factorial=factorial*i;
        

    }
    return factorial;
}
int main(){
    int n;
    int r;
    cin>>n>>r;
    int ans= fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
}