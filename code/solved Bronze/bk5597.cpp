#include<iostream>
#include<vector>
using namespace std;

// 과제 안 내신 분..? #5597
int main(){
    int n;
    vector<int> vc(30);

    while(cin >> n){
        vc[n-1] = n;
    }

    for(int i = 0; i < vc.size(); i++){
        if(vc[i] == 0) cout << i+1 << "\n";
    }
}