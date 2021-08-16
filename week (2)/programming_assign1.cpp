#include <iostream>

using namespace std;

#define SQR(x)(x*(x))//LINE-1: complete the macro definition

int main() {

    int i, j;

    cin >> i >> j;

    j = SQR(i + j);

    cout << j << endl;

    return 0;
}
