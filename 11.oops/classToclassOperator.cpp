#include <bits/stdc++.h>
using namespace std;
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
};
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
    // operator Rectangle()
    // {
    //     Rectangle temp(real, img);
    //     return temp;
    // }
};

int main()
{
    Complexx A(2, 3);
    Rectangle B = A;//A.operator rectangle()
    A.display();
    B.print();

    return 0;
}
