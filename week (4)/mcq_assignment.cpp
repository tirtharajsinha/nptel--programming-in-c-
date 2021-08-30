#include <algorithm>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// q1
// ans (a,b)

// class Square
// {
//     int l;

// public:
//     Square(int _l) : l(_l){};
//     // friend void print(Square);
//     void friend print(Square);
// };

// void print(Square s)
// {
//     cout << s.l;
// }
// int main()
// {
//     Square t1(5);
//     print(t1);
//     return 0;
// }
////////////////////////////////////////////////
// q2
// ans (a)

// class class1
// {
//     int a = 5;
//     friend class class2;
// };

// class class2
// {
// public:
//     void display(class1 &c)
//     {
//         cout << c.a;
//     }
// };

// int main()
// {
//     class1 c1;
//     class2 c2;
//     c2.display(c1);
//     return 0;
// }

///////////////////////////////////
// q3
// ans (b)

// class myClass
// {
//     static int a;

// public:
//     myClass() { a++; }
//     static int get() { return a; }
// };

// int myClass::a = 0;

// int main()
// {
//     cout << myClass::get() << " ";
//     myClass m[5];
//     cout << myClass::get();
//     return 0;
// }

/////////////////////////////////

// q4
// ans b

// int main()
// {
//     int n = 10;
//     std::cout << n;
//     return 0;
// }

/////////////////////////////////////

// q5
// ans (c)

// class Singleton
// {
//     int data;
//     static Singleton *ins;
//     Singleton(int i) : data(i) {}

// public:
//     int get() { return data; }
//     static Singleton *createIns(int i)
//     {
//         if (!ins)
//             ins = new Singleton(i);
//         return ins;
//     }
//     ~Singleton() { cout << data; }
// };

// Singleton *Singleton::ins = 0;

// void fun()
// {
//     Singleton *s = Singleton::createIns(1);
//     cout << s->get();
// }

// int main()
// {
//     Singleton *s = Singleton::createIns(0);
//     cout << s->get();
//     fun();
//     return 0;
// }

//////////////////////////////////

// q6
// ans (d)

// class classA
// {
//     int a;

// public:
//     classA(int _a) { a = _a; }
//     int get() { return a; }
// };

// class classB
// {
//     static classA c1;

// public:
//     static int get() { return c1.get(); }
// };
// // classA classB::c1 = 0;

// int main()
// {
//     classB b;
//     cout << b.get();
//     return 0;
// }

//////////////////////////////////
// q7
// ans (a)

// namespace test
// {
//     int i = 5;
// }

// int i()
// {
//     using namespace test;
//     int i;
//     i = 9;
//     return i;
// }

// int main()
// {
//     cout << ::i() << test::i;
//     return 0;
// }

/////////////////////////////////

// q8
// ans (c)

// namespace A
// {
//     int x = 5;
//     int y = 10;
// }

// namespace B
// {
//     int x = 3.14;
//     int y = 2.71;
// }

// int main()
// {
//     using A::x;
//     using B::y;
//     bool a, b;
//     a = x > y;
//     b = A::y < B::x;
//     cout << a << b;
//     return 0;
// }
///////////////////////////////

// q9
// ans (d)

// class statclass
// {
//     static int x = 10;
//     // static int x; // right line1

// public:
//     void print()
//     {

//         cout << x << endl;
//     }
// };
// // int statclass::x=10; // right line 2
// int main()
// {
//     statclass m;
//     m.print();
//     return 0;
// }