#include<iostream>
#include<string>
#include<stack>
using namespace std;

std::stack<std::string> ss; //LINE-1
void remove(){
    ss.pop();       //LINE-2
}

int main() {
    string str;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> str;
        ss.push(str);   //LINE-3
    }

    while(!ss.empty()) {

        cout << ss.top() << " ";

        remove();
    }
    return 0;
}
