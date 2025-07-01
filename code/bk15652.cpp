#include<iostream>

using namespace std;

// N과 M (4) #15652

int n,m;
int arr[10];
bool visited[10];

void dfs(int depth){
    if(depth == m){
        for(int i = 0 ; i < m ; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int j = 1 ; j <= n ; j++){
        if(visited[j]) return;

        visited[j] = true;
        arr[depth] = j;
        dfs(depth + 1);
        visited[j] = false;
    }
}

int main(){
    cin >> n >> m;
    dfs(0);
    return 0;
}