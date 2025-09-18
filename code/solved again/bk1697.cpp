#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// 숨바꼭질 #1697

int n, k, time = 0;

vector<bool> visited(100001);

int BFS(int start){

    visited[start] = true;
    queue<pair<int,int>> q;
    q.push({start,0});

    while(!q.empty()){
        int pos = q.front().first;
        int time = q.front().second;
        q.pop();

        if(pos == k) return time;

        int nextPos[] = {pos + 1, pos - 1, pos * 2};
        for(auto n : nextPos){
            if(n < 0 || n > 100000 || visited[n]) continue;
            visited[n] = true;
            q.push({n,time+1});
        }

        
    }

    return -1;
}

int main(){
    cin >> n >> k;

    cout << BFS(n);

    return 0;
}