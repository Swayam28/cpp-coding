#include <bits/stdc++.h>
using namespace std;



class nStack {
    int * arr, * top, size, n;
    int calculateTop(int i) const {
        return i * (size / n) - 1;
    }
    int calculateEnd(int i) const {
        return (i + 1) * (size / n) - 1;
    }
public:
    nStack(int size, int n) : arr(new int[size]), top(new int[n]), size(size), n(n) {
        for (int i = 0; i < n; i++) {
            top[i] = calculateTop(i);
        }
    }
    bool isEmpty(int i) { return top[i] == calculateTop(i); }
    void push(int i, int el) {
        if (top[i] < calculateEnd(i)) {
            top[i]++;
            arr[top[i]] = el;
        } else cout << "Overflow!" << endl;
    }
    void pop(int i) {
        if (top[i] > calculateTop(i)) top[i]--;
        else cout << "Underflow!" << endl;
    }
    int peek(int i) {
        if (top[i] > calculateTop(i)) return arr[top[i]];
        return -1;
    }
};


int main() {
    nStack st(40, 8);
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 5; j++) {
            st.push(i, i * j + i + j);
        }
    }

    for (int i = 0; i < 8; i++) {
        cout << i << "th stack: ";
        while (!st.isEmpty(i)) {
            cout << st.peek(i) << " ";
            st.pop(i);
        }
        cout << endl;
    }


   
    return 0;
}