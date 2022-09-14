#include <bits/stdc++.h>
using namespace std;
int duplicate(int arr[],int n){
    for(int i=0;i<n;i++){ 
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            return arr[i];
        }
    }
}
}
int main() {
    int t;
    cin>>t;
    while(t>0){
int arr[100];
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<duplicate(arr,n);
    }
    
    
    return 0;

}
