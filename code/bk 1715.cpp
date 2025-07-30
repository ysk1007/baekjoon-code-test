#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;

// 카드 정렬하기 #1715

// greedy : 매 순간 최선의 선택 해야함

// 매 순간 가장 적은 뭉치끼리 비교 해야함
// 비교 완료한 뭉치가 데크에 정렬된 위치로 들어가기는 어려움 => 일단 temp에 저장
// 다시 비교
// 데크에서 두 장 뽑고 temp(뭉쳐졌지만 그래도 가장 작을 수 있음)랑 셋이서 비교
// 
// S1. temp, i, j 세장 비교 => 작은 뭉치끼리 섞음 => k 와 나머지 비교 => 큰 쪽이 temp가되고 
// S3. 데크에 하나만 남아서 두 장 비교 (이제 끝)
int main(){
    int t, n;
    long long result = 0;
    cin >> t;
    vector<int> list(t);
    deque<long long> deq;

    for(int i = 0 ; i < t ; i++){
        cin >> list[i];
    }

    sort(list.begin(),list.end());

    for(auto l : list){
        deq.push_back(l);
    }

    long long temp = deq.front();
    deq.pop_front();

    while(!deq.empty()){
        long long i = deq.front();
        deq.pop_front();

        if(!deq.empty()){
            long long j = deq.front();
            deq.pop_front();
            
            

            result += j + i;
            temp = j + i;
        }
        // S3.
        else{
            result += temp + i;
            temp = temp + i;
        }
    }

    cout << result;
}