#include <iostream>
#include <string>
#include <list>

using namespace std;

class student{

    string name;
    int roll;
    public:

    student(){}

    student(string n,int r){
        name=n;
        roll=r;
    }

    string getname(){
        return name;
    }

    int getroll(){
        return roll;
    }

};

void disp(list<student> li,int n){

    for(list<student>::iterator it=li.begin();it!=li.end();it++){
        if((*it).getroll()==n){
            cout<<"Name is: "<<(*it).getname()<<endl;
            break;
        }
    }

}

void disp(list<student> li,string n){

    list<student>::iterator it;
    for(it=li.begin();it!=li.end();it++){
        if((*it).getname()==n){
            cout<<"roll number is: "<<(*it).getroll()<<endl;
            break;
        }
    }

}

void display(list<student> li){

    list<student>::iterator it;
    for(it=li.begin();it!=li.end();it++){
        cout<<(*it).getroll()<<" ";
    }

}

int main()
{
    list<student> phone_lit(5);
    phone_lit.push_back(student("swayam",12));
    phone_lit.push_back(student("vipul",15));
    phone_lit.push_back(student("sauvit",17));
    phone_lit.push_back(student("ayush",19));
    phone_lit.push_back(student("vanshaj",22));

    disp(phone_lit,17);
    disp(phone_lit,"vanshaj");

    return 0;
}