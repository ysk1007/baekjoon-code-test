#include<iostream>

using namespace std;

// 알고리즘 수업 - 알고리즘의 수행 시간 4 #24265
int main(){
    long long n;
    cin >> n;

    long long count = 0;

    for(int i = 0 ; i < n-1 ; i++){
        for(int j = i + 1; j < n; j++){
            count++;
        }
    }

    cout << count << "\n" << 2;
}