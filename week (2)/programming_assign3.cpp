#include <iostream>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b;
    int arr[] ={a,b};
    const int *p = arr; // LINE-1: allocate and initialize

    cout << *p << ", " << 1[p];

    return 0;
}
