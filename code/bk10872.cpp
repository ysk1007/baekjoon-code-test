#include<iostream>

using namespace std;

// 팩토리얼 #10872
int main(){
    int result = 1;
    int n = 1;

    cin >> n;

    if(n == 0){
        cout << 1;
        return 0;
    }

    for(int i = 2 ; i <= n ; i++){
        result *= i;
    }
    cout << result;
}