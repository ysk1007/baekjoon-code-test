#include<iostream>
using namespace std;

int fac(int n){
    int f = 1;
    for(int i = 1 ; i <= n ; i++){
        f *= i;
    }
    return f;
}

// 이항 계수 1 #11050
int main(){
    int n,k;
    cin >> n >> k;

    long long nf = fac(n);
    long long kf = fac(k);
    long long nkf = fac(n-k);

    cout << nf / (nkf * kf);
    return 0;
}