
#include <iostream>
#include <string>
using namespace std;
class Employee {
    int id;
    string name;

    mutable string department;    //LINE-1

    public:
        Employee(const int& _id, const string& _name, const string& _department="unknown")
            : id(_id), name(_name), department(_department) {}    //LINE-2

        void changeDepartment(const string& s) const {    //LINE-3
            department = s;
        }
        void display() const {     //LINE-4

            cout << "[" << id << "] " << name << " : " << department << endl;
        }
};

int main() {
    int a;
    string b, c, d;
    cin >> a >> b >> c >> d;
    Employee e1(a, b);
    const Employee e2(a, b, c);
    e1.display();
    e2.display();
    e1.changeDepartment(d);
    e2.changeDepartment(d);
    e1.display();
    e2.display();
    return 0;
}
