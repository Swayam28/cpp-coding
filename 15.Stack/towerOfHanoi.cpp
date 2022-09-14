#include <bits/stdc++.h>
using namespace std;

void tofh(int n,char source,char des,char rem){
    if(n==0){
        return;
    }
    tofh(n-1,source,rem,des);
    cout<<"Move disk "<<n<<" 3from "<<source<<" to "<<des<<endl;
    tofh(n-1,rem,des,source);
}

int main() {
int num_disks;
cout<<"Enter number of disks:\n";
cin>>num_disks;
tofh(num_disks,'A','C','B');

    

    return 0;

}
