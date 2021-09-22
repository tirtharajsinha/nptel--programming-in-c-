#include <iostream>
using namespace std;

class point
{
private:
    int x, y;

public:
    point() : x(0), y(0) {}
    point &operator()(int, int); //LINE-1
    int operator[](char c)
    { //LINE-2
        if (c == 'X' || c == 'x')
            return x;
        else if (c == 'Y' || c == 'y')
            return y;
        else
            return 0;
    }
    void show();
};

point &point::operator()(int _x, int _y)
{ //LINE-3
    x = _x;
    y = _y;
    return *this;
}
void point::show()
{
    cout << x << " + " << y;
}

int main()
{
    int a, b;
    cin >> a >> b;
    point p;
    p(a, b);
    cout << p['x'] << ", " << p['y'];
    return 0;
}