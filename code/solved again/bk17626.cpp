#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

// Four Squares #17626
vector<int> dp;
int n;
int main(){
    cin >> n;

    dp = vector<int>(n+1);

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;

    for(int i = 4; i <= n; i++){
        
    }

    cout << dp[sqrt(8)] << "\n";
    cout << sqrt(8) << "\n";
}