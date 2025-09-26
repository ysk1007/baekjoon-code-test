#include<iostream>
#include<vector>
using namespace std;

// 1로 만들기 #1463
int main(){
    int n;
    vector<int> dp(1000001,0);

    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    cin >> n;

    for(int i = 4 ; i <= n; i++){
        if(i % 3 == 0 && i % 2 == 0){           // 3과 2로 동시에 나누어 떨어질 때
            dp[i] = min(dp[i/3], dp[i/2]) + 1;
        }
        else if(i % 3 == 0){                    // 3으로 나누어 떨어질 때
            dp[i] = min(dp[i-1], dp[i/3]) + 1;
        }
        else if(i % 2 == 0){                    // 2로 나누어 떨어질 때
            dp[i] = min(dp[i-1], dp[i/2]) + 1;
        }
        else{                                   // 소수일 때
            dp[i] = dp[i-1] + 1;
        }
    }

    cout << dp[n];
}