#include<iostream>
#include<vector>
using namespace std;

// 스타트와 링크 #14889

int t;
vector<vector<int>> vc;
bool visited[22];
int result = 99999;

void dfs(int depth, vector<int> team){
    if(depth == t/2){
        
        for(int i = 0 ; i < t ; i++){
            for(int j = 0 ; j < t ; j++){
                if(i==j) continue;

                
            }
        }

        return;
    }

    for(int i = 0 ; i < t ; i++){
        if(visited[i]) continue;
        visited[i] = true;
        team.push_back(i);
        dfs(depth + 1, team);
        team.pop_back();
        visited[i] = false;
    }
}

int main(){
    // input
    cin >> t;
    vc = vector<vector<int>>(t,vector<int>(t));
    for(int i = 0 ; i < t ; i++){
        for(int j = 0 ; j < t ; j++){
            cin >> vc[i][j];
        }
    }

    vector<int> arr = vector<int>();
    dfs(0,arr);

    cout << result;
    return 0;
}