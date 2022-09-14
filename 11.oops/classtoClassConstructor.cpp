#include <bits/stdc++.h>
using namespace std;
class Complexx
{
    int real, img;

public:
    Complexx(int r, int i)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << "My number is : " << real << " + " << img << "i" << endl;
    }
    int getReal(){
        return real;
    }
    int getImg(){
        return img;
    }
    // operator Rectangle()
    // {
    //     Rectangle temp(real, img);
    //     return temp;
    // }
};
class Rectangle
{

    int length, width;

public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    void print()
    {
        cout << "Length of rectangle : " << length << endl
             << "Width of rectangle :  " << width << endl;
    }
    Rectangle(Complexx c){
        length=c.getReal();
        width=c.getImg();

    }
};

int main()
{
    Complexx A(2, 3);
    Rectangle B = A;//A.operator rectangle()
    A.display();
    B.print();

    return 0;
}
