#include<iostream>
#include<vector>
using namespace std;

// 평균 #1546
int main(){
    int n,maxScore = 0;
    vector<double> vc;
    int i;

    cin >> n;
    while(n--){
        cin >> i;
        vc.push_back(i);
        maxScore = max(maxScore,i);
    }

    double avg;
    for(double v : vc){
        avg += v / maxScore * 100;
    } 

    cout << avg / vc.size();

    return 0;
}