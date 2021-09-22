#include <iostream>
using namespace std;

class NaturalNumber
{
    int n;

public:
    NaturalNumber(int _n = 0)
    {
        if (_n < 0)
            throw -10; //LINE-1
        n = _n;
    }

    int operator++(int n)
    { //LINE-2
        NaturalNumber temp = *this;
        ++this->n;
        return temp;
    }
    operator int() { return n; } //LINE-3
};
int main()
{
    int a;
    cin >> a;
    try
    {
        NaturalNumber N = a;
        cout << N << " ";
        N++;
        cout << N;
    }
    catch (int e)
    {
        cout << "not a natural number: " << e;
    }
}