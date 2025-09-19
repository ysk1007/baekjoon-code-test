    #include<iostream>
    using namespace std;

    // 크로아티아 알파벳 #2941
    int main(){
        string alpha[] = {"c=","c-","dz=","d-","lj","nj","s=","z="};
        string word = "";
        int pos = 0;                                // 탐색 시작 위치 (중복 탐지 방지)

        cin >> word;
        int result = word.length();                 // 우선 반환 갯수는 문자열 길이

        for(auto al : alpha){

            while(true){
                int index = word.find(al,pos);      // word에 pos 위치부터 시작해서 크로아티아 알파벳이 있는지 찾아서 위치를 저장

                if(index == string::npos) break;    // 위치가 npos => 못 찾았다 => 그럼 다음 알파벳

                pos = index + al.length();          // 다음 탐색 위치는 알파벳이 시작하는 위치 + 알파벳 길이
                result--;                           // 알파벳 갯수 -1
            }

            pos = 0;                                // 탐색 위치 0으로 초기화
        }

        cout << result;

        return 0;
    }