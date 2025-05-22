#include<iostream>
#include<queue>
using namespace std;

// 뱀과 사다리 게임 #16928

int bfs[101];
int visited[101];
int n,m,x,y;

int BFS(){
    // 칸 위치, 깊이(주사위 던진 횟수)
    queue<pair<int,int>> que;
    que.push({1,0});
    visited[1] = true;

    while(!que.empty()){        
        int pos = que.front().first;       // 보드 위치
        int count = que.front().second;    // 주사위 던진 횟수
        que.pop();

        if(pos == 100) return count;

        for(int i = 1 ; i <= 6 ; i++){
            int nextPos = pos + i;
            if(nextPos > 100) continue;

            // 사다리나 뱀 있으면 이동
            if(bfs[nextPos] != 0){
                nextPos = bfs[nextPos];
            }

            if(visited[nextPos]) continue;
            visited[nextPos] = true;
            que.push({nextPos,count + 1});
        }
    }
    return -1;
}

int main(){
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> x >> y;
        bfs[x] = y;
    }

    for(int j = 0 ; j < m ; j++){
        cin >> x >> y;
        bfs[x] = y;
    }

    cout << BFS();
}