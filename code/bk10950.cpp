#include <iostream>

using namespace std;

// A+B - 3 #10950
int main(){
    int a,b = 0;
    cin >> a;
    cin >> b;
    if(a == 0 || b== 0 || a < 0 || b > 9) return 0;
    cout << a + b - 3;
}