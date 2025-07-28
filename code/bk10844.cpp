#include<iostream>

using namespace std;

// 쉬운 계단 수 #10844
int main(){
    int n;
    long long result = 0;
    long long dp[101][10] = {0};

    cin >> n;

    for(int i = 1 ; i < 10 ; i++){
        dp[1][i] = 1;
    }

    for(int i = 2; i <= n ; i++){
        for(int j = 0 ; j < 10 ; j++){
            if(j > 0) dp[i][j] += dp[i-1][j-1];
            if(j < 9) dp[i][j] += dp[i-1][j+1];
            dp[i][j] %= 1000000000;
        }
    }

    for(int i = 0 ; i < 10 ; i++){
        result = (result + dp[n][i]) % 1000000000;
    }

    cout << result;
}