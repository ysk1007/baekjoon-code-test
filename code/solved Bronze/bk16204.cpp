#include<iostream>

using namespace std;

// 카드 뽑기 #16204
int main(){
    // 앞 뒷면 같은 카드가 최대로 나오는 개수 구하기

    int n = 0;      // 카드의 전체 개수
    int m = 0;      // O 카드의 개수
    int k = 0;      // 카드 뒷 면에 O를 그릴 회수
    int result = 0; // 앞 뒷면 그림이 같은 카드 개수

    cin >> n >> m >> k;

    // 앞 뒤가 O인 카드 개수
    result += min(m,k);

    // 앞 뒤가 X인 카드 개수
    result += min(n-m,n-k);

    cout << result;

}