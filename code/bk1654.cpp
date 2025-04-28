#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 랜선 자르기 #1654

int k,n,len;
long long sum = 0;

// 최소 길이
long long minLen = 1;

// 중간 값
long long midLen = 0;

// 가장 이상적인 최대 길이
long long maxLen;
vector<int> vc;


bool cut(){
    int count = 0;
    for(auto v : vc){
        count += v / midLen;
    }
    return count >= n;
}

int main(){
    cin >> k >> n;

    while(k--){
        cin >> len;
        sum += len;
        vc.push_back(len);
    }
    sort(vc.begin(),vc.end(),greater<int>());

    maxLen = sum/n;

    // 파라미터 서치
    while(minLen <= maxLen){ // 최소 길이가 최대 길이보다 작을때 까지
        midLen = (maxLen + minLen) / 2;

        if(cut()){  // 필요량보다 더 많이 자르거나 딱 맞게 자름
            minLen = midLen + 1;
        }
        else{ // 필요량보다 적게 자름
            maxLen = midLen - 1;
        }
    }

    cout << maxLen;

    return 0;
}