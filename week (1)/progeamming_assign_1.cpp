#include <iostream>
#include <string>
using namespace std;

int scmp(string str1, string str2){

    if (str1>str2)    //LINE-1

        return 1;

    else if (str1==str2)     //LINE-2

        return 0;

    else
        return -1;
}

int main() {
    string s1, s2;

    cin >> s1 >> s2;

    cout << s1 << (scmp(s1, s2) == 0? " is equal to " :
        (scmp(s1, s2) == 1? " is greater than " :
        " is less than ")) << s2;

    return 0;
}
