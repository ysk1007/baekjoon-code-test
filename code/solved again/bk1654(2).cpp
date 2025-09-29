#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 랜선 자르기 #1654
long long k, n, s, m, e, len, totalLen = 0;
vector<int> vc;

bool cut(){
    int count = 0;
    for(auto v : vc){
        count += v / m;
    }
    return count >= n;
}

int main(){
    cin >> k >> n;
    vc = vector<int>(k,0);

    for(int i = 0 ; i < k ; i++){
        cin >> len;
        totalLen += len;
        vc[i] = len;
    }

    sort(vc.begin(),vc.end());

    s = 1;
    e = totalLen / n;

    while(s <= e){
        m = (s + e) / 2;
        if(cut()){                  // 소분을 더 많이 함 -> 길이를 더 크게 시도
            s = m + 1;
        }
        else{                       // 소분을 부족하게 했거나, 딱 맞거나 -> 길이를 더 작게 시도
            e = m - 1;
        }
    }
    
    cout << e;
    
}