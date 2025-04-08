#include<iostream>
using namespace std;

// X보다 작은 수 #10871
int main(){
    int n,x,i;

    cin >> n >> x;
    while(cin >> i){
        if(x <= i) continue;
        cout << i << " ";
    }

    return 0;
}