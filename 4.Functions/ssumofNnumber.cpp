#include <iostream>
using namespace std;
int sum(int n){
    int add=(n*(n+1))/2;
    return add;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}