#include <bits/stdc++.h>
using namespace std;
class complexx
{
public:
    int real;
    int img;
    complexx(int a, int b)
    {
        real = a;
        img = b;
    }
    complexx()
    {
        real = 0;
        img = 0;
    }
    void display()
    {
        cout << "complex no. is " << real << " + " << img << "i" << endl;
    }
    void display(int a)
    {
        real = a;
        cout << "complex no. is " << real << " + " << img << "i" << endl;
    }
    void display(int a, int b)
    {
        real = a;
        img = b;
        cout << "complex no. is " << real << " + " << img << "i" << endl;
    }
    void operator-()
    {
        real = -real;
        img = -img;
    }
    complexx operator+(complexx a)
    {
        int nr = real + a.real;
        int ni = img + a.img;
        return complexx(nr, ni);
    }
    bool operator<(complexx b)
    {
        if (real < b.real)
        {
            return true;
        }
        else if (real > b.real)
        {
            return false;
        }
        else if (b.real == real)
        {
            if (img < b.img)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};
int main()
{

    complexx c(5, 6);
    // -c;

    c.display();
    complexx d(4, 5);
    d.display();

    complexx e(5, 4);
    e.display();

    // c.display();
    // c.display(5);
    // c.display(4,8);
    complexx z;
    z = c + d + e;
    z.display();
    bool ans = (c < d);

    if (ans)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}
