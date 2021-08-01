#include <iostream>
using namespace std;

int sum(int x, int y) {
    return x + y;
}
int subtract(int x, int y) {
    return x - y;
}

typedef int (*calculate)(int,int);    //LINE-1

int caller(int a, int b, calculate fp) {     //LINE-2

    return (*fp)(a,b);      //LINE-3
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << caller(a, b, &sum) << " ";
    cout << caller(a, b, &subtract);
    return 0;
}
