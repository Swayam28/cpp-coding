#include<iostream>    
using namespace std;    
    
int main(){    
    double d1, d2;    
    double res;       
    
    try{    
        if(!(cin>>d1))throw "Wrong Data type";    
        if(!(cin>>d2))throw "Wrong Data type";    
    }    
    catch(const char *msg){    
        cout<<msg<<endl;       
        cin.clear();           
        cin.ignore(10000,'\n');    
    }    
         
    try{    
        if(d2 == 0)throw "Division by zero not possible";    
        else{    
            res = d1/d2;    
        }    
    }        
    catch(const char *msg){    
        cout<<msg<<endl;       
    }                          
    cout<<res<<endl;           
    return 0;    
}