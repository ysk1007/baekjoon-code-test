#include<iostream>

using namespace std;

// 연속합 #1912
int main(){
    int t,prev = 0,result = -1001;

    cin >> t;

    for(int i = 0 ; i < t ; i++){
        int n;
        cin >> n;
        prev = max(n, prev + n);
        result = max(result, prev);
    }

    cout << result;
}