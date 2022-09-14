#include <bits/stdc++.h>
using namespace std;
void rotateArray(int arr[],int n,int x){
   int temp[n];
   int k=0;
   for(int i=x;i<n;i++){
    temp[k]=arr[i];
   k++;
   }
   for(int i=0;i<x;i++){
    temp[k]=arr[i];
    k++;
   }
   for(int i=0;i<n;i++){
    arr[i]=temp[i];
   }
   for(int i=0;i<n;i++){
   cout<<arr[i]<<" ";
   }
   

}
int main() {
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int x;
cin>>x;
rotateArray(arr,n,x);
    

    return 0;

}
