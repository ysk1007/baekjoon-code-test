#include<iostream>

using namespace std;

// 빠른 A+B #15552
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int a,b,n;

    cin >> n;
    while(n--){
        cin >> a >> b;
        cout << a+b << "\n";
    }

    return 0;
}