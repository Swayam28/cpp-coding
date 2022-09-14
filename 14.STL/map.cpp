#include <bits/stdc++.h>
#include <map>

using namespace std;

int main() {
map<string,int> student_id;
student_id["A"]=1;
student_id["B"]=2;
student_id["C"]=3;
student_id["D"]=4;
    student_id.insert({{"E",5},{"F",6}});
    map<string,int>::iterator it;
    for(it=student_id.begin();it!=student_id.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    return 0;

}
