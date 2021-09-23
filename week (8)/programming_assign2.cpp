#include <iostream>
#include <exception>
using namespace std;

class AgeException : public exception
{ //LINE-1

public:
    virtual const char *what() const throw()
    {

        return "invalid age"; //LINE-2
    }
};

class recruitment
{
    string _name;
    int _age;

public:
    recruitment(string name, int age) : _name(name)
    {

        age < 18 ? throw AgeException() : _age = age; //LINE-3
        // if (age < 18)
        // {
        //     throw AgeException();
        // }
        // else
        // {
        //     _age = age;
        // }
    }
    void output()
    {
        cout << _name << " : " << _age << endl;
    }
};

int main()
{
    string nm;
    int ag;
    cin >> nm >> ag;
    try
    {
        recruitment r(nm, ag);
        r.output();
    }
    catch (exception &e)
    {
        cout << e.what();
    }
    return 0;
}