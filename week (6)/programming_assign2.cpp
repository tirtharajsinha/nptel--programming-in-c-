// Consider the program below.Fill in the blanks at
// LINE - 1 with appropriate keyword,
// at LINE - 2 with declaration of fun() as pure virtual and
// at LINE - 3 with appropriate object instantiation
// such that it satisfies the given test cases.

#include <iostream>
using namespace std;

class Base
{
protected:
    int s;

public:
    Base(int i = 0) : s(i) {}

    virtual ~Base() {} //LINE-1

    virtual int fun(int a) { return a; } //LINE-2
};

class Derived : public Base
{
public:
    Derived(int i) : Base(i) {}
    ~Derived();
    int fun(int x)
    {
        // cout << s;
        return s * x;
    }
};

class Wrapper
{

public:
    void fun(int a, int b)
    {

        Base *t = new Derived(a); //LINE-3
        int i = t->fun(b);
        cout << i << " ";
        delete t;
    }
};

Derived::~Derived() { cout << --s << " "; }

int main()
{
    int i, j;
    cin >> i >> j;
    Wrapper w;
    w.fun(i, j);
    return 0;
}