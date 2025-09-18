#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;

// 단어 공부 #1157
int main(){
    string str;
    cin >> str;

    int alpha[26] = {0};

    map<char,int> map;
    vector<char> vc;
    int count = -1;

    for(auto s : str){
        char alpha = toupper(s);
        map[alpha]++;
    }

    for(auto m : map){
        if(m.second > count){
            vc.clear();
            vc.push_back(m.first);

            count = m.second;
        }
        else if(m.second == count){
            vc.push_back(m.first);
        }
    }

    cout << (vc.size() > 1 ? '?' : vc.front());

    return 0;
}