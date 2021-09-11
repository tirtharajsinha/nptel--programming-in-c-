#include <algorithm>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// q1
// ans (a) not sure

//////////////////////////////////

// q2
// ans (b)

// int main()
// {
//     const char ch = 'a';
//     const char *p = &ch;
//     char *pt = const_cast<char *>(p);
//     *pt = 'b';
//     cout << *pt;
//     return 0;
// }

//////////////////////////////////////

// q3
// ans (d)

// class employee
// {
//     int emp_id;
//     string name;

// public:
//     employee(int _emp_id, string _name) : emp_id(_emp_id), name(_name) {}
//     void update(string na) const
//     {
//         reinterpret_cast<employee *>(this)->name = na;
//         // const_cast<employee *>(this)->name = na;
//     }
//     void showInfo() const
//     {
//         cout << emp_id << " : " << name;
//     }
// };

// int main(void)
// {
//     const employee e(3, "Rajat");
//     e.update("ram");
//     e.showInfo();
//     return 0;
// }

////////////////////////////////////////
// q4
// ans (b)
// class B
// {
// public:
//     B() { cout << "1"
//                << " "; }
//     B(int _x) { cout << "11"
//                      << " "; }
// };

// class D1 : virtual public B
// {
// public:
//     D1() { cout << "2"
//                 << " "; }
//     D1(int _x) : B(_x) { cout << "22"
//                               << " "; }
// };

// class D2 : virtual public B
// {
// public:
//     D2() { cout << "3"
//                 << " "; }
//     D2(int _x) : B(_x) { cout << "33"
//                               << " "; }
// };

// class DD : public D1, public D2
// {
// public:
//     DD() { cout << "4"
//                 << " "; }
//     DD(int _x) : D1(_x), D2(_x) { cout << "44"
//                                        << " "; }
// };

// int main()
// {
//     DD d(5);
//     return 0;
// }

/////////////////////////////////////////

// q5
// ans (a,c)

// class c1
// {
//     int a = 10;
// };

// class c2
// {
// public:
//     int b = 20;
// };

// int main()
// {
//     c1 u;
//     // c2 *v = (c2 *)(&u);
//     // c2 *v = static_cast<c2 *>(&u); // error
//     c2 *v = reinterpret_cast<c2 *>(&u);
//     // c2 *v = dynamic_cast<c2*>(&u); // error
//     cout << v->b;
//     return 0;
// }

///////////////////////////////

// q6
// ans (b)
// class Parent
// {
//     virtual void f() {}
// };
// class Child : public Parent
// {
//     void f() {}
// };

// int main()
// {
//     try
//     {
//         Parent *pa = new Parent;
//         Parent *pb = new Child;

//         Child *c1 = dynamic_cast<Child *>(pa);
//         if (c1 == 0)
//             cout << "Bad Cast Parent";
//         Child *c2 = dynamic_cast<Child *>(pb);

//         if (c2 == 0)
//             cout << "Bad Cast Child";
//     }
//     catch (exception &e)
//     {
//         cout << e.what();
//     }
//     return 0;
// }
///////////////////////////////

// q7
// ans (d)

// class Parent
// {
//     virtual void f() {}
// };
// class Child : public Parent
// {
//     void f() {}
// };

// int main()
// {
//     try
//     {
//         Parent *pa = new Parent;
//         Parent *pb = new Child;

//         Child *c1 = static_cast<Child *>(pa);
//         Child *c2 = static_cast<Child *>(pb);

//         if (c1 == NULL)
//             cout << "Bad Cast Child\n";

//         if (c2 == NULL)
//             cout << "Bad Cast Parent\n";

//         if (c1 != NULL && c2 != NULL)
//         {
//             cout << "static cast Successful for parent & child";
//         }
//     }
//     catch (exception &e)
//     {
//         cout << e.what();
//     }
//     return 0;
// }

//////////////////////////
// q8
// ans (c) not sure

///////////////////////////

// q9
//  ans (d)
// struct One
// {
//     void func() { cout << "struct"; }
// };

// void test(const One &o)
// {
//     o.func();
// }

// int main()
// {
//     One t;
//     test(t);
//     return 0;
// }
