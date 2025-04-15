#include<iostream>
using namespace std;

// 유클리드 호제법으로 최대 공약수 구하기
// 1. 큰수를 작은수로 나눈다. -> 몫과 나머지가 나올것임
// 2. 나눈수를 나머지로 계속 나눈다
// 3. 나머지가 0일때 나눈수가 최대공약수가 됨
int gcd(int a, int b){
    int x = max(a,b);
    int y = min(a,b);

    int r = -1;
    while(r != 0){
        r = x%y;
        x = y;
        y = r;
    }

    return x;
}

// 최소공배수 : 어떤 두 수의 곱은, 그 두 수의 최대공약수와 최소공배수의 곱과 같다.
// 두 수의 곱 = 최대 공약수 * 최소 공배수
// 최소 공배수 = 두 수의 곱 / 최대 공약수
int lcm(int a, int b){
    int g = gcd(a,b);
    return (a*b) / g;
}

// 최대공약수와 최소공배수 #2609
int main(){
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b) << "\n" << lcm(a,b);
    return 0;
}