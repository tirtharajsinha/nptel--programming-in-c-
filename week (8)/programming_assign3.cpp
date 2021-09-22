#include <iostream>
using namespace std;

template <class T>

class Multiplier
{
    T _v1, _v2;

public:
    Multiplier(T v1 = 0, T v2 = 0) : _v1(v1), _v2(v2) {}

    T calculate();
};

template <class T>
T Multiplier<T>::calculate()
{ //LINE-1

    return _v1 * _v2;
}

int main()
{
    int i1, i2;
    double d1, d2;
    cin >> i1 >> i2 >> d1 >> d2;

    Multiplier<int> m1(i1, i2);
    Multiplier<double> m2(d1, d2);

    cout << m1.calculate() << " " << m2.calculate();
    return 0;
}