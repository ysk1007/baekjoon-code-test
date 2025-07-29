#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 카드 정렬하기 #1715
int main(){
    int t, n, result = 0, total = 0;
    cin >> t;
    vector<int> list(t);

    for(int i = 0 ; i < t ; i++){
        cin >> list[i];
    }

    sort(list.begin(),list.end(), greater<>());

    result = list.back();
    list.pop_back();

    while(!list.empty()){
        result = result + list.back();
        total += result;
        cout << total << "\n";
        list.pop_back();
    }

    cout << "결과 : " << total;
}