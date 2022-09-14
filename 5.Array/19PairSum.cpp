#include <bits/stdc++.h>
using namespace std;
int pairSum(int arr[],int n,int num){
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==num){
                count++;
            }
        }
    }
    return count;
}
int main() {
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int num;
cin>>num;
cout<<pairSum(arr,n,num);
    

    return 0;

}
