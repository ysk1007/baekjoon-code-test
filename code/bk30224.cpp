#include<iostream>
using namespace std;

// Lucky 7 #30224
int main(){
    int n = 0;
    cin >> n;
    if(to_string(n).find('7') != string::npos){ // n 7을 포함
        cout << (n % 7 == 0 ? 3 : 2);
    }
    else{
        cout << (n % 7 == 0 ? 1 : 0);
    }

    return 0;
}