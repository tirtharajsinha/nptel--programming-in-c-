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
    String(int k) : n(k), arr(new char[k]) {} //LINE-1
    operator int()
    { //LINE-2

        return arr[--n];
    }

    String &operator=(int k)
    { //LINE-3
        char t;

        for (int j = 0; j < k; j++)
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

        cout << static_cast<char>(s) << " ";
    }

    return 0;
}