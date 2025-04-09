#include<iostream>
#include<string>
using namespace std;

// 문자열 #9086
int main(){
    int count;
    string str;
    cin >> count;

    while(cin >> str){
        cout << str.front() << str.back() << "\n";
    }
}