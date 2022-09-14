#include <bits/stdc++.h>
using namespace std;
int tripletSum(int arr[],int n,int num){
    int count=0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
            if(arr[i]+arr[j]+arr[k]==num){
                count++;
            }
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
cout<<tripletSum(arr,n,num);
    

    return 0;

}
