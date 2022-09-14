#include <bits/stdc++.h>
using namespace std;
void rotateArray(int a[][100],int m){
     for(int i=0;i<m;i++){
        reverse(a[i],a[i]+m);
    }
    
    for(int i=0;i<m;i++){
        for(int j=i;j<m;j++){
            swap(a[i][j],a[j][i]);

        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
int main() {
    int a[100][100];
    int m;
    cin>>m;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
rotateArray(a,m);
    

    return 0;

}
