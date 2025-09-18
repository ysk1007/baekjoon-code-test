#include<iostream>
#include<vector>
using namespace std;


int gcd(int a, int b){
    int m = 1;

    while(m > 0){
        m = a % b;
        a = b;
        b = m;
    }

    return a;
}

// 가로수 #2485
int main(){
    int t;
    cin >> t;
    vector<int> vc(t);

    for(int i = 0 ; i < t ; i++){
        cin >> vc[i];
    }

    int distGCD = vc[1] - vc[0];

    for(int i = 2 ; i < t ; i++){
        distGCD = gcd(distGCD,vc[i] - vc[i-1]);
    }

    int total = (vc[t-1] - vc[0]) / distGCD + 1;
    
    cout << total - t;

    
}