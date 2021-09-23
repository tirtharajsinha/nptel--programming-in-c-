#include <iostream>
using namespace std;

struct Point
{
    int x, y;
    Point(const int &_x = 0, const int &_y = 0) : x(_x), y(_y) {}
    Point(Point &pt) : x(pt.x), y(pt.y) {}
};

template <class T>
class Adder
{
    T n;

public:
    Adder(T &_n) : n(_n) {}
    T add(const int &t) { return n + t; }
};

//LINE 1

template <>
class Adder<Point>
{ //LINE-2

    Point n;

public:
    Adder(Point _n) : n(_n) {}
    Point add(const int &t);
    friend ostream &operator<<(ostream &os, const Point &p);
};

Point Adder<Point>::add(const int &t)
{ //LINE-3

    Point res;
    res.x = n.x + t;
    res.y = n.y + t;
    return res;
}

ostream &operator<<(ostream &os, const Point &p)
{
    os << "[" << p.x << ", " << p.y << "]" << endl;
    return os;
}

int main()
{
    double d;
    int x, y, t;
    cin >> d >> x >> y >> t;

    Adder<double> ob1(d);
    cout << ob1.add(t) << " ";

    Point p(x, y);
    Adder<Point> ob2(p);
    cout << ob2.add(t) << " ";
    return 0;
}