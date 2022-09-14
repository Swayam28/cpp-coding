#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void greatestwithoutorder(int A[],int a,int B[],int b,int i){

    sort(A,A+a);
    sort(B,B+b);

    int res[i];
    int k1=a-1;
    int k2=b-1;

    int f=0;
    while(f<i){
        if(A[k1]>B[k2]){
            res[f]=A[k1];
            k1--;
            f++;
        }
        else{
            res[f]=B[k2];
            k2--;
            f++;
        }
    }

    for(int l=0;l<i;l++){
        cout<<res[l]<<" ";
    }


}

int main()
{
    int a,b;
    cout<<"enter length of A: ";
    cin>>a;
    int A[a];
    cout<<"enter elements for A: ";
    for(int i=0;i<a;i++){
        cin>>A[i];
    }

 
    cout<<"enter length of B: ";
    cin>>b;
    int B[b];
    cout<<"enter elements for B: ";
    for(int i=0;i<b;i++){
        cin>>B[i];
    }

    int i;
    cout<<"Enter length of I: ";
    cin>>i;

    greatestwithoutorder(A,a,B,b,i);


    return 0;
}