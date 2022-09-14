#include <bits/stdc++.h>
using namespace std;
bool permutation(string str1,string str2){
    int n=256;
    int count[n]={0};
    int i;
    for(i=0;i<str1[i] && i<str2[i];i++){
        count[str1[i]]++;
        count[str2[i]]--;

    }
    if(str1[i]||str2[i]){
        return false;
    }
    for(i=0;i<n;i++){
        if(count[i]){
            return false;
        }

    }
    return true;
}
int main() {
string str1;
cin>>str1;

string str2;
cin>>str2;

    cout<<permutation(str1,str2);

    return 0;

}
