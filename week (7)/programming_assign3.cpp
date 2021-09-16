#include <iostream>
using namespace std;

class A
{
    int a = 10;

public:
    void display()
    {
        cout << a << " ";
    }
};

class B
{
    int b = 20;

public:
    void display()
    {
        cout << b;
    }

    int operator=(int x)
    { //LINE-1
        b = b + x;
    }
};

void fun(const A &t)
{
    int x;
    cin >> x;
    A &u = const_cast<A &>(t); //LINE-2
    u.display();
    B &v = reinterpret_cast<B &>(u); //LINE-3
    v = x;
    v.display();
}

int main()
{
    A t1;
    fun(t1);
    return 0;
}