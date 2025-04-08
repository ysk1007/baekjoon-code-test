#include<iostream>

using namespace std;

// 두 수 비교하기 #1330
int main(){
    int a,b;
    cin >> a >> b;
    cout << (a == b ? "==" : (a > b ? ">" : "<"));
}