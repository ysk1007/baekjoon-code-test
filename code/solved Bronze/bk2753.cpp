#include<iostream>

using namespace std;

// 윤년 #2753
int main(){
    int year;
    cin >> year;
    cout << ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 1 : 0;
}