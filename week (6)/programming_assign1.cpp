#include <iostream>

using namespace std;

class Shape
{

protected: //LINE-1: Fill up with proper access specifier
    double ar;

public:
    virtual void area(){}; //LINE-2: Declare area as pure virtual function
    void show()
    {
        cout << ar << " ";
    }
};

class Rectangle : public Shape
{
    int h, w;

public:
    Rectangle(int a, int b) : h(a), w(b) {}
    void area()
    {
        ar = h * w;
    }
};

class Circle : public Shape
{
    int r;

public:
    Circle(int a) : r(a) {}
    void area()
    {
        ar = 3.14 * r * r;
    }
};

int main()
{
    int w, h, r;
    cin >> w >> h >> r;
    Shape *s1 = new Rectangle(h, w);
    Shape *s2 = new Circle(r);
    s1->area();
    s2->area();
    s1->show();
    s2->show();
    return 0;
}