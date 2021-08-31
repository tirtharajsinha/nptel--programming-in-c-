#include <iostream>
using namespace std;

class singleton
{
    char c;
    static singleton *object; //LINE-1
    singleton(char x) : c(x) {}

public:
    static singleton *create(char x)
    { //LINE-2
        if (!object)
            object = new singleton(x);
        return object;
    }
    void show();
};

singleton *singleton::object = 0; //LINE-3

void singleton::show()
{
    cout << c;
}

int main()
{
    char x, y;
    singleton *s1, *s2;
    cin >> x >> y;
    s1 = singleton::create(x);
    s2 = singleton::create(y);
    s1->show();
    s2->show();
    return 0;
}