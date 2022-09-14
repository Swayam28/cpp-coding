#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minNo=INT_MAX;
    int maxNo=INT_MIN;
    for(int i=0;i<n;i++){
        minNo=min(arr[i],minNo);
        maxNo=max(arr[i],maxNo);
    }
cout<<minNo<<endl;
cout<<maxNo<<endl;
    

    return 0;

}
