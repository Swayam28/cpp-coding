#include <bits/stdc++.h>
using namespace std;
void print(int n){
    cout<<n<<endl;
}
int add(int x,int y){
    print(x);
    print(y);
    int sum=x+y;
    return sum;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<"sum="<<add(a,b);
    return 0; 
}