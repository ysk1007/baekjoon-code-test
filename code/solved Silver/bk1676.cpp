#include<iostream>
#include<cmath>
using namespace std;

// 팩토리얼 0의 개수 #1676
int main(){
    int n, result = 0;
    cin >> n;
    if(n == 0){
        cout << 1;
        return 0;
    }

    while(n > 0){
        result += n/5;
        n /= 5;
    }

    cout << result;
    return 0;
}