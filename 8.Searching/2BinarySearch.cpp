#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int l,int r,int x){
    if(r>=l){
    int mid=l+(r-l)/2;
    if(arr[mid==x]){
        return mid;
    }
    if(arr[mid]>x){
        return binarySearch(arr,l,mid-1,x);
    }
    return binarySearch(arr,mid+1,r,x);
    }
    return -1;
}
int main() {
int arr[]={1,2,3,4,5};
int x=3;
cout<<binarySearch(arr,0,4,x);
    

    return 0;

}
