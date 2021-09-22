#include <iostream>
using namespace std;

template <class T, int N> //LINE-1
class FiveElements
{
    T *base;

public:
    FiveElements(T a[]) : base(a)
    { //LINE-2
        for (int i = 0; i < N; i++)
            base[i] = a[i];
    }
    void print();
};

template <class T, int N> //LINE-3

void FiveElements<T, N>::print()
{ //LINE-4
    for (int i = 0; i < N; i++)
        cout << base[i] * 10 << "-";
}

int main()
{
    int x;
    double y;
    int a[5];
    double c[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        a[i] = x;
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> y;
        c[i] = y;
    }
    FiveElements<int, 5> ia(a);
    ia.print();
    FiveElements<double, 5> ca(c);
    ca.print();
    return 0;
}