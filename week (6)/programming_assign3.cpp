#include <iostream>

using namespace std;

class A
{
    int i;

    virtual void f(); //LINE-1

public:
    A(int x) : i(x){};
    friend void fun(A &t); //LINE-2
};

class B : public A
{
    int j;
    void f() { cout << j; }

public:
    B(int x) : A(x), j(2 * x) {}
};

void A::f() { cout << i; }

void fun(A &t)
{
    t.f();
}

int main()
{
    int x;
    cin >> x;
    B t(x);
    fun(t);
    return 0;
}