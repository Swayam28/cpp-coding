#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int originaln=n;
    int sum=0;
    while(n>0)
    {
        int digit=n%10;
        int p = digit*digit*digit;
        sum+=p;
        n=n/10;

    }
    cout<<sum;
    if(sum==originaln){
        cout<<"armstrong"<<endl;

    }
    else{
        cout<<"not armstrong"<<endl;
    }
}