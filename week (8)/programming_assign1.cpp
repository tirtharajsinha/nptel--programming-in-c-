#include <iostream>
using namespace std;

template <class T, int n>

class List
{
    T items[n];
    int i;

public:
    List() : i(-1) {}
    void addVal(const T &val);
    T getVals();
};
template <class T, int n> // LINE-1

void List<T, n>::addVal(const T &val)
{ // LINE-2

    if (i < n - 1)
        items[++i] = val;
    else
        throw(i + 1);
}

template <class T, int n> // LINE-3

T List<T, n>::getVals()
{ // LINE-4
    for (int j = 0; j <= i; j++)
        cout << items[j] << " ";
    cout << endl;
}

int main()
{
    int m;
    cin >> m;

    try
    {
        List<int, 5> intList;
        for (int i = 0; i < m; i++)
            intList.addVal(1 + i);
        intList.getVals();
    }
    catch (int ie)
    {
        cout << ie << " : outside list" << endl;
    }
    try
    {
        List<char, 7> charList;
        for (int i = 0; i < m; i++)
            charList.addVal(65 + i);
        charList.getVals();
    }
    catch (int ie)
    {
        cout << ie << " : outside list" << endl;
    }
    return 0;
}