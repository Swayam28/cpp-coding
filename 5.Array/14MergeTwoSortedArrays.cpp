#include <bits/stdc++.h>
using namespace std;
int merging(int arr1[],int arr2[],int n,int m,int res[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            res[k]=arr1[i];
            k++;i++;
        }
        else{
            res[k]=arr2[j];
            k++;
            j++;
        }

    }
    while(i<n){
        res[k]=arr1[i];
        k++;
        i++;
    }
    while(j<m){
        res[k]=arr2[j];
        k++;
        j++;
    }
   
}
int main() {
int t;
cin>>t;
while(t>0){
    int arr1[100];
    int n,m;
    int arr2[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int res[n+m];
    merging(arr1,arr2,n,m,res);
    for(int i=0;i<n+m;i++){
        cout<<res[i]<<" ";
    }
}
    

    return 0;

}
