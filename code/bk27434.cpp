#include<iostream>
#include<vector>
using namespace std;

// 팩토리얼 3 #27434
int main(){
    int n;
    unsigned long long f = 1;
    vector<unsigned long long> vc = {1,2};

    cin >> n;

    for(int i = 2 ; i <= n ; i++){
        f *= i;
    }

    cout << f;

    return 0;
}