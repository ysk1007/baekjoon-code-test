#include<iostream>
#include<deque>
using namespace std;

// 프린터 큐 #1966
int main(){
    int t,n,m, file;
    cin >> t;

    while(t--){
        cin >> n >> m;

        int count = 0;
        deque<pair<int,int>> que;
        for(int i = 0 ; i < n ; i++){
            cin >> file;

            // 들어온 순서, 중요도
            pair<int,int> p = {i,file};

            // 큐가 비어있다면 push
            if(que.empty()) que.push_back(p);
            else{
                // 들어올 작업의 중요도가 더 크다
                if(p.second > que.front().second){
                    count++;
                    if(p.second == m){
                        cout << count << "\n";
                        break;
                    }
                }
                // 중요도가 같다면
                else if(p.second == que.front().second){
                    que.push_front(p);
                }
                // 들어올 작업의 중요도가 더 작다
                else{
                    que.push_back(p);
                }
            }
        }


        while(!que.empty()){
            cout << que.front().first << "(" << que.front().second << ") ";
            que.pop_front();
        }

    }

    return 0;
}