#include<iostream>

using namespace std;

// 구구단 #2739
int main(){
    int n;
    cin >> n;
    for(int i = 1 ; i < 10 ; i++){
        cout << n << " * " << i << " = " << i*n << "\n";
    }
}