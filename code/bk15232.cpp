#include<iostream>

using namespace std;

// Rectangles #15232
int main(){
    int x,y;
    cin >> x >> y;
    while(x--){
        for(int i = 0; i < y ; i++){
            cout << "*";
        }
        cout << "\n";
    }
}