#include<iostream>

using namespace std;

long long method(int a, int b){
    return (a+b)*(a-b);
}

// 이상한 기호 #15964
long long main(){
    int a,b;
    cin >> a >> b;
    cout << method(a,b);
}