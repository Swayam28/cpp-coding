#include <bits/stdc++.h>
using namespace std;
void findElement(int a[][100],int m,int n,int x){
    int i=0,j=n-1;
    while(i<m && j>=0){
        if(a[i][j]==x){
            cout<<i<<" "<<j<<endl;
            return;
        }
        else if(x>a[i][j]){
            i++;
        }
        else {
            j--;
        }
    }
    cout<<"-1"<<endl;
}
int main() {

    int a[100][100];
    int m,n;
    cin>>m>>n;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
int x;
cin>>x;
findElement(a,m,n,x);

    return 0;

}
