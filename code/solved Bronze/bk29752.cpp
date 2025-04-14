#include<iostream>
#include<cmath>
using namespace std;

// 최장 스트릭 #29752
int main(){
    int n,x = 0;
    int maxX = 0;
    cin >> n;
    while(cin >> n){
        if(n > 0){
            x++;
        }
        else{
            maxX = max(maxX,x);
            x = 0;
        }
    }
    cout << max(maxX,x);
    return 0;
}