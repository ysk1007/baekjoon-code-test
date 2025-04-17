#include<iostream>
#include<cmath>
using namespace std;

// 팩토리얼 0의 개수 #1676
int main(){
    int n;
    cin >> n;
    long long f = 1;

    for(int i = 2 ; i <= n ; i++){
        f *= i;
    }

    f = tgamma(n+1);
    cout << f;
}