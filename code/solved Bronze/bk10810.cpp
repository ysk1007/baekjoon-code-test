#include<iostream>
#include<vector>
using namespace std;

// 공 넣기 #10810
int main(){
    int t,i,j,k;
    cin >> t;
    vector<int> vc(t,0);

    cin >> t;
    while(t--){
        cin >> i >> j >> k;
        i--;
        j--;
        for(i ; i <= j ; i++){
            vc[i] = k;
        }
    }

    for(auto v : vc){
        cout << v << " ";
    }

    return 0;
}