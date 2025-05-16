#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// 케빈 베이컨의 6단계 법칙 #1389

int n,m,a,b;
vector<vector<int>> bfs;

int BFS(int n){
    queue<int> q;
    vector<bool> visited(n + 1);
    int count = 0;
    
    q.push(n);
    visited[n] = true;

    int distance = 0;
    while(!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; ++i) {
            int current = q.front(); q.pop();
            // current의 이웃들 방문 + count += distance
            count += distance;
        }
        distance++;  // 한 "층" 처리 후에 증가
    }   
    return count;
}

int main(){
    cin >> n >> m;

    bfs = vector<vector<int>>(n+1);

    for(int i = 0 ; i < n ; i++){
        cin >> a >> b;
        bfs[a].push_back(b);
        bfs[b].push_back(a);
    }


    for(int i = 1 ; i <= n ; i++){
        cout << i << ":" << BFS(i) << "\n";
    }

    pair<int,int> result{0,0};
    for(int j = 1 ; j <= n ; j++){
        int count = BFS(j);
        if(result.second < count){
            result.first = j;
            result.second = count;
        }
        else if(result.second == count){
            result.first = min(result.first, j);
            result.second = count;
        }
    }

    cout << result.first;
}