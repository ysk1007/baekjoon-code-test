#include<iostream>

using namespace std;

// 별찍기-1 #2438
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 0 ; j < i ; j++){
            cout << "*";
        }
        cout << "\n";
    }
}