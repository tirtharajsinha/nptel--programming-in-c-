#include <iostream>
using namespace std;

class Rectangle
{
protected:
    int w;
    Rectangle(int _w) : w(_w) {}

public:
    virtual void print() = 0; //LINE-1: Declare print as pure virtual function
};

class Square : public Rectangle
{
    int h;

public:
    Square(int _h) : Rectangle(_h), h(_h) {}

    void printArea() { cout << (h * w); }

    void print()
    {

        cout << h << " "; //LINE-2: call appropriate function

        printArea();
    }
};

// void Rectangle::print()
// { //LINE-3: Complete the header of the print function
//     cout << w << " ";
// }
int main()
{
    int a;
    cin >> a;
    Rectangle *sp = new Square(a);
    sp->print();
    return 0;
}