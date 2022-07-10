#include <iostream>
using namespace std;
int main(){
    
    int pocketMoney=3000;
    for (int date=0;date<=31;date++){
        if(date%2==0){
            continue;
        }
        if(pocketMoney=0){
            break;
        }
        cout<<"go out neha"<<endl;
        pocketMoney=pocketMoney-300;
    }
    return 0;
}