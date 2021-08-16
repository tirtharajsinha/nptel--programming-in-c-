#include <iostream>
#include <algorithm>
#include <vector>
#include <typeinfo>
using namespace std;


// q1
// ans > (a,b,d)
/*
//void fun(char n1 = 0, int n2 = 0, double n3 = 0.0);
//void fun(char = 0, int = 0, double = 0.0);
//void fun(char = 0, int, double n3); // wrong
//void fun(char n1, int n2, double n3);


int main(){
    fun(0,0,0.0);
    cout<<"ok";
}


void fun(char n1,int n2,double n3){
cout<<"ok";
}
*/

////////////////////////////////////////////////////////

//q2
// ans > (a) 2,3,5
/*
int sum(int n1=0,int n2=0,int n3=0);

int main(){
    cout<<sum(3.14f,3.7f);
}

int sum(int n1,int n2,int n3){
    return n1+n2+n3;
}
*/

///////////////////////////////////////////////////////////

// q3
//ans > (a)
/*
void compute(int n1,int n2,int& n3,int* n4){
    n3=n1+n2;
    *n4=n1*n2;
}

int main(){
    int w=10,x=20,y=0,z=0;
    compute(w,x,y,&z);
    cout << y <<", " << z;
    return 0;
}

*/

/////////////////////////////////////////////////////////////////

//q4
//ans > (a)
/*
int n=0;
void test(int& n1,int* n2, int n3){
    n++;
    cout << n1 << "," << n2 << "," << n3 << endl;
    cout << ((n1==n)?1:0) << " - " << ((&n1==&n)?1:0) << endl;
    cout << ((*n2==n)?1:0) << " - " << ((n2==&n)?1:0) << endl;
    cout << ((n3==n)?1:0) << " - " << ((&n3==&n)?1:0) << endl;

}
int main(){
    test(n,&n,n);
    return 0;

}
*/

////////////////////////////////////////////////////////////////////

//q5
// ans > (C)
/*
static volatile myval=1;
void f(void){
    for(;myval>0;){
        cout << myval;
    }

}

int main(){

    return 0;
}
*/

/////////////////////////////////////////

// q6
// ans > d) 6 7
/*
#define MAXVAL(X,Y)(X>Y?X:Y)

inline int maxval(int x,int y){
    cout <<x<<y;
    return x>y?x:y;
}

int main()
{
    int n1=3,n2=4;
    cout << MAXVAL(++n1,++n2) << " ";
    cout << maxval(++n1,++n2) << " ";


    return 0;
}

*/

////////////////////////////////////////////////////////////

// q7
//ans > (a,b)
/*
int multiply(int a){return a;}
int multiply(int a,int b=1){return a*b;}
int multiply(int a ,int b,int c=1){return a*b*c; }
double multiply(double a,double b=1.0,double c=1){return a*b*c;}

int main()
{
    //multiply(10);
    //multiply(10,20);
    cout << typeid(multiply(10,20,30)).name() << endl;
    cout << typeid(multiply(10.0,20.0,30.0)).name() << endl;
    return 0;
}
*/

/////////////////////////////////////////////////////////////////////

// q8
//ans > (b,c)
// concept of const ->> https://www.geeksforgeeks.org/const-keyword-in-cpp/
/*
int main()
{
    const double d = 31.97;
    // double* const dp = &d; // wrong
    // double const* dp=&d; // right
    // const double* const dp=&d; //right
    // double* dp=&d; // wrong
    cout << *dp;
    return 0;
}
*/

//////////////////////////////////////////////////////////////

//q9
//ans > (b)
/*
int func(const int& x)
{
    return x-1;
}
int main()
{
    int n=5;
    cout << func(n+10);
    return 0;
}
*/





