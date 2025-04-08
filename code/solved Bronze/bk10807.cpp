#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 개수 세기 #10807
int main(){
    int len,n;
    vector<int> vc;
    cin >> len;
    
    while(len--){
        cin >> n;
        vc.push_back(n);
    }

    cin >> n;

    cout << count(vc.begin(),vc.end(),n);
}