#include<iostream>

using namespace std;

// Vending Machine #17284
int main(){
    int n,total = 0;
    while(cin >> n){
        if(n == 1) total += 500;
        else if(n == 2) total += 800;
        else total += 1000;
    }

    cout << 5000 - total;

    return 0;
}