#include <bits/stdc++.h>
#include <list>
using namespace std;
void display(list<int> &L)
{
    list<int>::iterator it;
    for (it = L.begin(); it != L.end(); it++)
    {
        cout << *it << " ";
    }
    cout<<endl;
}
int main()
{
    list<int> L;
    list<int> M(3);
    int size, element;

    cout << "Enter size of list" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << "th of list" << endl;
        cin >> element;
        L.push_back(element);
    }
    display(L);
    // L.pop_back();
    // L.pop_front();
    L.remove(2);
    display(L);

    list<int>::iterator ir;
    ir = M.begin();
    *ir = 9;
    ir++;
    *ir = 5;
    ir++;
    *ir = 7;

    display(M);
    L.sort();
    M.sort();
    display(L);
    display(M);
    L.merge(M);
    display(L);

    return 0;
}
