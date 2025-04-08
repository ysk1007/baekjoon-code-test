#include<iostream>
#include<vector>
using namespace std;

// 행렬 덧셈 #2738
int main(){
    int x,y,n;
    vector<int> matrix1,matrix2;

    cin >> x;
    cin >> y;

    for(int i = 0 ; i < x*y ; i++){
        cin >> n;
        matrix1.push_back(n);
    }

    for(int i = 0 ; i < x*y ; i++){
        cin >> n;
        matrix2.push_back(n);
    }

    for(int i = 0 ; i < x*y; i++){
        cout << matrix1[i] + matrix2[i];
        cout << ((i+1) % x == 0 ? "\n" :" ");
    }

    return 0;
}