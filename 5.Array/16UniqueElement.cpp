#include <bits/stdc++.h>
using namespace std;
int unique(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(arr[i]==arr[j]){
                
                flag=true;
            }
        }
        if(flag==false){
            return arr[i];
        }
    }
}
int main() {
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<unique(arr,n);
    

    return 0;

}
