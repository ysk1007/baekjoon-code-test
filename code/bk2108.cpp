#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
using namespace std;

// 통계학 #2108

int t,n;
long long sum = 0;
vector<int> vc;
map<int,int> m;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;   // t는 무조건 홀수

    while(t--){
        cin >> n;
        sum += n;
        vc.push_back(n);
        m[n]++;
    }
    sort(vc.begin(),vc.end());

    int count = 0;
    for(auto a : m){
        if(a.second > count) count = a.first;
    }

    int avg = round((double)sum/vc.size());
    if(avg == 0) avg = 0;

    cout << avg << "\n";                            // 1. 산술평균
    cout << vc[vc.size() / 2] << "\n";              // 2. 중앙값
    cout << count << "\n";                          // 3. 최빈값
    cout << vc.back() - vc.front();                 // 4. 범위
}