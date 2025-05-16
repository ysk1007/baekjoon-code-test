#include<iostream>
#include<map>
#include<vector>
using namespace std;

// 탕후루 #30804

int main(){
    int n,start = 0, maxLen = 0;
    cin >> n;
    map<int,int> fruit;
    vector<int> ggotti(n);

    for(int i = 0 ; i < n ; i++){
        cin >> ggotti[i];
    }

    for(int end = 0 ; end < n ; end++){
        fruit[ggotti[end]]++;

        while(fruit.size() > 2){
            fruit[ggotti[start]]--;
            if(fruit[ggotti[start]] == 0)
                fruit.erase(ggotti[start]);
            start++;

        }

        maxLen = max(maxLen, end - start + 1);
    }


    cout << maxLen;
    return 0;
}