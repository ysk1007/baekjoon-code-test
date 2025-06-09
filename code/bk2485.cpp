#include<iostream>
#include<set>
using namespace std;

// 가로수 #2485
int main(){
    int t,n,temp = 0, interval = 9999999;
    int start,end;
    cin >> t;
    set<int> st;

    for(int i = 0 ; i < t ; i++){
        cin >> n;
        st.insert(n);

        if(i == 0) start = n;
        if(i == t-1) end = n;
    }

    bool flag = true;
    while(flag){
        flag = false;
        int i = 0;
        for(auto s : st){

            if(i > 0 && interval > s - temp){
                flag = true;
                interval = s - temp;
            }

            temp = s;
            i++;
        }

        for(int j = start; j < end ; j += interval){
            st.insert(j);
        }
    }

    cout << st.size() - t;


}