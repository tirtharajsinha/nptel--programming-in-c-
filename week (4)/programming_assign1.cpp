#include <iostream>
using namespace std;

class Interest; //LINE-1
class Maturity
{
    double prin;
    double amt = 0;

public:
    Maturity(double p) : prin(p) {}
    double calculate(Interest &);
};

class Interest
{
    double in;

public:
    Interest(double i) : in(i){};
    friend class Maturity; //LINE-2
};

double Maturity::calculate(Interest &i)
{
    amt = prin + i.in * prin / 100;
    return amt;
}

int main()
{
    double i, j;
    cin >> i >> j;
    Maturity m(i);
    Interest in(j);
    cout << "Matured Amount: " << m.calculate(in);
    return 0;
}