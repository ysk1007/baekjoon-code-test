#include<iostream>

using namespace std;

// A+B-5 #10952
int main(){
    int a,b;
    while(true){
        cin >> a >> b;
        if(a==0 && b==0) break;
        cout << a + b << "\n";
    }
}