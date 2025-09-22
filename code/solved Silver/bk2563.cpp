#include<iostream>

using namespace std;

// 색종이 #2563
int main(){
    int arr[101][101] = {0};
    int t,x,y, result = 0;

    cin >> t;

    while(t--){
        cin >> x >> y;

        for(int i = x ; i < x + 10 ; i++){
            for(int j = y ; j < y + 10 ; j++){
                if(arr[i][j] == 1) continue;
                arr[i][j] = 1;
                result++;
            }
        }
    }
    
    cout << result;
}