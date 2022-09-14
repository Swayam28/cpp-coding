#include <bits/stdc++.h>
using namespace std;
void intersection(int arr1[],int n,int arr2[],int m){
   vector<int> g;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                    g.push_back(arr1[i]);
            }
        }
    }
    for(int i=0;i<g.size();i++){
        cout<<g[i]<<" ";

    }
}
int main() {
int n;
cin>>n;
int arr1[n];
for(int i=0;i<n;i++){
    cin>>arr1[i];
}
int m;
cin>>m;
int arr2[m];
for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    intersection(arr1,n,arr2,m);

    return 0;

}
