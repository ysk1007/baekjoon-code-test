#include<iostream>

using namespace std;

// 사분면 고르기 #14681
int main(){
    int x,y;
    cin >> x >> y;
    cout << (x > 0 ? (y > 0 ? 1 : 4):(y > 0 ? 2 : 3));

    return 0;
}