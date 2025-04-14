#include<iostream>
using namespace std;

// 최댓값 #2562
int main(){
    int i = 1,n = 0,index = 0,result = 0;
    while(cin >> n){
        if(n > result){
            result = n;
            index = i; 
        }
        i++;
    }

    cout << result << "\n" << index;
}