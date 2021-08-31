#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A(int _x) : x(_x) { cout << "Class A: "; }
    friend void print(int, int); //LINE-1
};

class B
{
    int y;

public:
    B(int _y) : y(_y) { cout << "Class B: "; }
    friend void print(int, int); //LINE-2
};

void print(int a, int b)
{
    if (a == 1)
        cout << A(b).x;
    else
        cout << B(b).y;
}

int main()
{
    int a, b;
    cin >> a >> b;
    print(a, b);
    return 0;
}