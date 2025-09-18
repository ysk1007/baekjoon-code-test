#include<iostream>
using namespace std;

// 하노이 탑 이동 순서 #11729
int n,k = 0;
string result="";

void move(string start, string to){
    k++;
    result += start + " " + to + "\n";
}

void hanoi(int n, string start, string to, string other){
    if(n==1){   // 원판이 하나면 그냥 이동하면 됨
        move(start,to);
    }
    else{                               // n개의 원판들을 3번째로 옮기려면 
        hanoi(n-1,start,other,to);      // 우선 n-1개를 2번째로 옮김
        move(start,to);                 // 가장 큰 n원판(바닥)을 3번째로 옮김
        hanoi(n-1,other,to,start);      // 2번째 있던 n-1개의 원판들을 3번째로 옮김
    }
}

int main(){
    cin >> n;

    hanoi(n,"1","3","2");


    cout << k << "\n" << result;
}