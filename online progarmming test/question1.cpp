
// Fill in the blank at LINE-1, with appropriate declaration of port.
// Fill in the blank at LINE-2 with appropriate statement to create object instance of type class ConfMgr.
// Fill in the blank at LINE-3 with appropriate return statement.
// Fill in the blank at LINE-4 with appropriate header for function GetConf().
// Fill in the blank at LINE-5 with appropriate header for function update() such that it satisfies the given test cases.
#include <iostream>
using namespace std;
class ConfMgr
{
    string host;

    int port; //LINE-1
    ConfMgr() {}
    ConfMgr(string _host, int _port) : host(_host), port(_port) {}

public:
    ~ConfMgr() {}
    static const ConfMgr &createInstance(string _host = "localhost",
                                         int _port = 8080)
    {

        ; //LINE-2

        ___________________________________; //LINE-3
    }

    void GetConf()
    { //LINE-4
        port = _port;
    }

    void update(int port)
    { //LINE-5
        cout << host << ":" << port << endl;
    }
};
int main()
{
    string a;
    int b, c;
    cin >> a >> b >> c;
    const ConfMgr cm = ConfMgr::createInstance(a, b);
    cm.GetConf();
    cm.update(c);
    cm.GetConf();
    return 0;
}