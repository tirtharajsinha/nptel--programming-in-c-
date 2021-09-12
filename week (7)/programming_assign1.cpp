#include <iostream>
using namespace std;

class A
{
protected:
    char i;

public:
    A(char a) : i(a) {}
    void display(char x)
    {
        cout << x << " ";
    }
    // create abstract function fun()
    virtual void fun() = 0; //LINE-1
};

class B : public A
{ //LINE-2
public:
    B(int a = 0) : A(a) {}
    void fun() { display(i + 1); }
};

class C : public A
{ //LINE-3
public:
    C(int a = 0) : A(a) {}
    void fun() { display(i + 2); }
};

class D : public A
{ //LINE-4

public:
    D(int a = 0) : A(a) {}
    void fun() { display(i + 3); }
};

int main()
{
    char ch;
    cin >> ch;
    A *pt[3] = {new B(ch), new C(ch), new D(ch)};
    for (int i = 0; i < 3; i++)
    {
        pt[i]->fun();
    }
    return 0;
}