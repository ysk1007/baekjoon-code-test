#include<iostream>
using namespace std;

// Do Not Touch Anything #13136
int main(){
    int r,c,n;
    cin >> r >> c >> n;

    int result = 1;

    result *= (r % n == 0) ? r / n : r / n + 1;
    result *= (c % n == 0) ? c / n : c / n + 1;

    cout << result;
    return 0;
}