#include<iostream>

using namespace std;

class Inner{
    int x;

public:
    Inner(int c) : x(c){ cout << c << " "; }

    ~Inner(){ cout << x << " "; }
};
class Outer{

    Inner *y,*x;//LINE-1: declare data-members

public:
    Outer(int a, int b) : x(new Inner(a)), y(new Inner(b)){}

    ~Outer() { delete x; delete y; }    //LINE-2: free the data-members

};

int main() {

    int a, b;

    cin >> a >> b;

    Outer(a, b);

    return 0;
}
