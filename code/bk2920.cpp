#include<iostream>
#include<vector>
using namespace std;

// 음계 #2920
int main(){
    int n;
    vector<int> vc;
    vector<int> ace = {1,2,3,4,5,6,7,8};
    vector<int> desc = {8,7,6,5,4,3,2,1};

    while(cin >> n){
        vc.push_back(n);
    }

    if(vc == ace) cout << "ascending";
    else if(vc == desc) cout << "descending";
    else cout << "mixed";

    return 0;
}