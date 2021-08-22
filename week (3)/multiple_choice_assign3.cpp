#include <iostream>
#include <algorithm>
#include <vector>
#include <typeinfo>
using namespace std;

// q1
// ans (c) 3 3 4
/*
int data=0;

class Test
{
    public:
        Test(){data++;}
        ~Test(){data++;}
};

int incr()
{
    data++;

    {
        Test obj;
    }
    cout << data << " ";
    return data++;
}

int main()
{
    cout << incr() << " ";
    cout << data << endl;
    return 0;
}

*/
////////////////////////////////////////////

// q2
// ans (b,d)
/*
class Student
{
    int roll,semester;
    string name;
    public:
        Student(int _roll,string _name,int _semester):
            roll(_roll), name(_name),semester(_semester){}
        void promote(){this->semester++;}
        void show(){cout << roll << " : " << name << " : " << semester;}

};

int main()
{
    Student s(10, "Nikhil", 2);
    s.promote();
    s.show();
    return 0;
}
*/
/////////////////////////////////////////////////

// q3
// ans (a)
/*
int i =10;
class Data
{
    int i;
    int elem1[5];
    int *elem2;
    public:
        Data(): i(20),elem2(new int[i]){ }
        int show()
        {
            int i=30;
            cout << i <<" ";
            return this->i;
        }

};

int main()
{
    Data d;
    cout << d.show() << " " << sizeof(d);
    return 0;
}
*/

///////////////////////////////////////////
// q4
// ans (d)  // not sure
/*
class Data
{
    int i, j;
    public:
        void set_i(int _i){ i = _i; }
        void set_j(){j = 10; }
        int get_i(){ return i; }
        int get_j(){ return ++j; }
        int calc1(int k) { return i + j + k; }
        int calc2(int k) { return (i = j + k); }
};
*/

////////////////////////////////////////////////
// q5
// ans (d)
/*
class Data
{
    public:
        Data(int _i=0) : i(_i) {cout << "Data::Data():" << i << " "; }
        ~Data(){cout << "Data::Data():" << i << " "; }
    private:
        int i;
};

Data *dp2;
void func()
{
    dp2=new Data(1);
}

int main()
{
    Data *dp1;
    {
        func();
        Data d1(2);
    }
    Data d2(3);
    delete dp2;
    return 0;
}
*/

/////////////////////////////////////
// q6
// ans a
/*
class Double
{
    private:
        double a;
    public:
        Double() : d(0.0) { cout << "Double::Double()a";}
        Double(double _d) : d(_d) { cout << "Double::Double(double)b";}
        Double(const Double& _od) : d(_od.d) { cout << "Double::Double(Double&)c";}
        ~Double(){cout << d << " ";}
};

int main()
{
    Double d1(43.33);
    Double d2();
    Double d3 = 53.33;
    Double d4 =d3;
    return 0;
}
*/

/////////////////////////////////
// q7
// ans (c)
/*
class Integer
{
    int i;
    public:
        Integer(const int& _i): i(_i){}
        void change_i(const int& _i) const {i=_i;}
        int get_i() const {return i;}
};

int main()
{
    Integer obj(10);
    obj.change_i(5);
    cout << obj.get_i();
    return 0;
}
*/
///////////////////////////////////
// q8
// ans (c);
/*
class ThisPointer
{
    private:
        int data;
    public:
        ThisPointer(int data =0){this->data=data;}
        ThisPointer(ThisPointer& t){this = t;}
        void print() {cout << "data = " << data << endl;}
};

int main()
{
    ThisPointer obj(10);
    ThisPointer obj1(obj);
    obj.print();
    obj1.print();
    return 0;
}
*/

///////////////////////////////////////
// q9
// ans (b,c)
/*
class Integer
{
    int i;
    void set_j(int _j){j=_j;}
    public:
        int j;
        void set_i(int _i){i=_i;}
        int get_j(){return j;}
    private:
        int get_i(){return i;}
};

int main()
{
    Integer i_obj;
    i_obj.set_i(10);
    //i_obj.set_j(20);
    //cout << i_obj.get_i();
    cout << i_obj.get_j();
}

*/
