#include<iostream>
#include<vector>
using namespace std;

// 분수찾기 #1193
int main(){
    int t,n = 1,m = 1;
    bool flag = false;
    cin >> t;

    vector<pair<int,int>> arr(t + 1);
    arr[1] = {n,m};

    for(int i = 2 ; i <= t ; i++){

        if(!flag){

            if(n==1){
                m++;
                flag = !flag;
            }
            else{
                m++;
                n--;
            }
        }
        else{
            if(m==1){
                n++;
                flag = !flag;
            }
            else{
                n++;
                m--;
            }
        }


        arr[i] = {n,m};
    }

    cout << arr[t].first << "/" << arr[t].second;
}