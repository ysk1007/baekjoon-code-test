#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

// 별 찍기 - 10 #2447
vector<vector<string>> vc;
int n;

void div(pair<int,int> startPos, pair<int,int> endPos,int pow){    
    if(pow <= 0) return;
    
    for(int i = startPos.first ; i < endPos.first ; i++){
        for(int j = startPos.first ; j < endPos.second ; j++){
            vc[i][j] = " ";
        }
    }
    
    pow /= 3;
    int pos = pow/3;
    if(pos <= 0) return;

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            div({pos + (i*n),pos+(i*n)},{pos + pos , pos + pos}, pow);    
        }
    }
}

int main(){
    cin >> n;
    
    int blank = n;
    vc = vector<vector<string>>(n, vector<string>(n));

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            vc[i][j] = "*";
        }
    }

    int pos = n/3;
    div({pos,pos},{pos+pos, pos+pos},n);

    for(auto v : vc){
        for(auto t : v){
            cout << t;
        }
        cout << "\n";
    }
}