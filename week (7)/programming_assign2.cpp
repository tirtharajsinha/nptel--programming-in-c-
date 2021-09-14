// Char(char _ch) : ch(toupper(_ch)) {} //LINE-1
// operator char() { return ch; }       //LINE-2
// operator int() { return ch - 'A'; }  //LINE-3

#include <iostream>
using namespace std;
class String
{
    char *arr;
    int n;

public:
    String(int k) : n(k) { cout << n << "ii "; } //LINE-1
    operator char()
    { //LINE-2
        cout << 1 << " ";
        return arr[--n];
    }

    operator char *()
    { //LINE-3
        char t;
        cout << "2"
             << " ";
        for (int j = 0; j < 4; j++)
        {
            cin >> t;
            this->arr[j] = t;
        }
        return *this;
    }
};
int main()
{
    int k;
    cin >> k;
    String s(k);
    s = k;
    for (int i = 0; i < k; i++)
    {
        cout << i << " ";
        cout << static_cast<char>(s) << " ";
    }

    return 0;
}