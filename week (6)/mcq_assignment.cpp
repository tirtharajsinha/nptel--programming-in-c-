#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// q1
// ans (a)

// class Base
// {
//     int x;

// public:
//     Base(int _x) : x(_x) {}
//     void fun() { cout << x; }
// };

// class Derived : public Base
// {
//     int y;

// public:
//     Derived(int _x, int _y) : Base(_x), y(_y) {}
//     void fun() { cout << y; }
// };
// int main()
// {
//     Base *b1 = new Base(5);
//     Base *b2 = new Derived(2, 3);
//     b1->fun();
//     b2->fun();
//     return 0;
// }

//////////////////////////////////////////////
// q2
// ans (a)
// class B
// {
// public:
//     void fun() { cout << "B::fun()" << endl; }
// };

// class D : public B
// {
// public:
//     using B::fun;
//     void fun(int i) { cout << "D::fun()" << endl; }
// };

// int main()
// {
//     D t1;
//     t1.fun();
//     t1.fun(5);
//     return 0;
// }

////////////////////////////////////////////
// q3
// ans (b)

// class A
// {
// public:
//     virtual void fun() = 0;
// };

// class B
// {
// public:
//     virtual void fun() {}
// };

// class C
// {
//     int x;

// public:
//     void fun() {}
// };

// int main()
// {
//     cout << sizeof(A) << " " << sizeof(B) << " " << sizeof(C);
//     return 0;
// }

///////////////////////////////////////////////
// q4
// ans (d)

// class A1
// {
// public:
//     void fun() { cout << "A::fun()"; }
// };

// class A2 : public A1
// {
// public:
//     void fun() { cout << "B::fun()"; }
// };

// class A3 : public A2
// {
// public:
//     void fun() { cout << "C::fun()"; }
// };

// int main()
// {
//     A1 *cb = new A1;
//     // A1 *cb = new A2;
//     // A1 *cb = new A3;
//     cb->fun();
//     return 0;
// }

///////////////////////////////////////////////
// q5
// ans (a)
// class Base
// {
// public:
//     void f1() { cout << "1"; }
//     virtual void f2() { cout << "2"; }
// };

// class Derived : public Base
// {
// public:
//     virtual void f1() { cout << "3"; }
//     void f2() { cout << "4"; }
// };

// int main()
// {
//     Base *b = new Derived;
//     b->f1();
//     b->f2();
//     return 0;
// }

///////////////////////////////////////////////
// q6
// ans (a,b,c)

// class Base
// {
// public:
//     virtual void print() = 0;
// };

// void Base::print()
// {
//     cout << "Virtual Class";
// }

// int main()
// {
//     // Base b; // LINe 1
//     // Base *pt = new Base; // line 2

//     b.print();
//     pt->print();
//     return 0;
// }

//////////////////////////////////////////

// q7
// ans (c)

// class A1
// {
// public:
//     A1() { cout << "A1"; }
//     ~A1() { cout << "~A1"; }
// };

// class A2 : public A1
// {
// public:
//     A2() { cout << "A2"; }
//     ~A2() { cout << "~A2"; }
// };

// int main()
// {
//     A1 *t = new A2;
//     delete t;
//     return 0;
// }

//////////////////////////////////////
// q8
// ans (b)
//  view https://www.educative.io/edpresso/what-is-a-cpp-abstract-class
// class Tranport
// {
//     public:
//     virtual void fare()=0;
// };

// class Bus : public Tranport{
//     void face() {cout << "Bus fare";}
// };

// class Train : public Tranport{};

// class PublicBus : public Bus
// {
//     public:
//     void fare(){cout << "public bus fare";}
// };

/////////////////////////////////////
// q9
//  ans (a)

class Base
{
    int b;

public:
    Base(int i) : b(i) {}
    virtual void f(Base *t) { cout << t->b << endl; }
};

class Derived : public Base
{
    int d;

public:
    Derived(int i = 0, int j = 0) : Base(i), d(j) {}
    void f(Derived *t) { cout << t->d << endl; }
};

int main()
{
    Base *t1 = new Derived(1, 2);
    t1->f(new Derived);
    return 0;
}