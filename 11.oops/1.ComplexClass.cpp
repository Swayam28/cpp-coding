#include <iostream>
using namespace std;
class ComplexNumbers{
int real;
int imgaginary;
public:
void ComplexNumbers(int real,int imaginary){
this->real=real;
this->imgaginary=imaginary;
}
void plus(ComplexNumbers const &c2){
real=real+c2.real;
imaginary=imaginary+c2.imaginary;
}
void multiply(ComplexNumbers const &c2){
int firsts=real*c2.real;
    int outers=real*c2.imaginary;
    int inners=imaginary*c2.real;
    int lasts=(-1)*(imaginary*c2.imaginary);
    real=firsts+lasts;
    imaginary=outers+inners;
}
void print(){
cout<<real<<"+"<<imaginary<<"i"<<endl;}

};
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }   
}