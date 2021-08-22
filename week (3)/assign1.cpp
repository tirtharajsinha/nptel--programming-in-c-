#include <iostream>
using namespace std;

class rectangle{
    int *w, *h;
    public:
        rectangle(int _w, int _h) : w(&_w), h(&_h){}    //LINE-1

        rectangle(rectangle &r) : w(w), h(h){}    //LINE-2

        ~rectangle(){ delete w; delete h; }

        int area(){ return *w * *h; }    //LINE-3
};
int main(){
    int a, b;

    cin >> a >> b;

    rectangle *rec = new rectangle(a, b);

    cout << rec->area();

    return 0;
}
