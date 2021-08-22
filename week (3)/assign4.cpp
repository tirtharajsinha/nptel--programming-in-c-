#include <iostream>

using namespace std;

class FloatNumber{

    private:
        char sign;

        int exponent, mantissa;

    public:
        FloatNumber() : sign('+'),exponent(0),mantissa(0) {}    //LINE-1

        FloatNumber(char _sign, int _exponent, int _mantissa) :
        				sign(_sign),exponent(_exponent),mantissa(_mantissa) {}    //LINE-2

        FloatNumber(FloatNumber& f) : sign(f.sign),exponent(f.exponent),mantissa(f.mantissa) {}    //LINE-3

        void display(){ cout << sign << exponent << "." << mantissa << endl; }
};

int main(){
    char a;
    int b, c;
    cin >> a >> b >> c;
    FloatNumber n1;
    FloatNumber n2(a, b, c);
    FloatNumber n3(n2);
    n1.display();
    n2.display();
    n3.display();
    return 0;
}
