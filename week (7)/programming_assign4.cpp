#include <iostream>
using namespace std;
class C1
{
public:
    C1(int x = 0) { cout << x << " "; }
    void fun(int i) { cout << i << " "; }
};
class C2 : virtual public C1
{ // LINE-1 : Inherit from class C1
public:
    C2(int x = 0) : C1(++x) { fun(x); }
};
class C3 : virtual public C1
{ // LINE-2 : Inherit from class C1
public:
    C3(int x = 0) : C1(++x) { fun(x); }
};
class CC : public C3, public C2
{ // LINE-3 : Inherit from class C2 and C3
public:
    CC(int i = 0) : C2(i * 2), C3(++i) { fun(i); }
};
int main()
{
    int i;
    cin >> i;
    CC obj(i);
    return 0;
}