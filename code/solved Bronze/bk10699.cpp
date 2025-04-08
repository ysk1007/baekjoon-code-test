#include <iostream>
#include <ctime>
#include <string>
using namespace std;

// 오늘 날짜 #10699
int main(){
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);

    string date = "";

    string year = to_string(t->tm_year + 1900);
    string month = to_string(t->tm_mon + 1);
    string day = to_string(t->tm_mday);

    if(month.length() < 2) month = "0" + month;
    if(day.length() < 2) day = "0" + day;

    date = year + "-" + month + "-" + day;

    cout << date;
}