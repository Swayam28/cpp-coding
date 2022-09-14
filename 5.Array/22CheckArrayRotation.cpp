#include <bits/stdc++.h>
using namespace std;
void checkRotation(int arr[],int n){
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            index=i+1;
        }
        
    }
    cout<<index;
    
    
}
int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    checkRotation(arr,n);

    return 0;

}
