#include <iostream>
using namespace std;

int main(){
    string a, b;
    getline(cin,a); // 공백을 포함한 문자열을 입력받기 위해
    getline(cin,b);

    int ans = 0;
    for(int i=0; i+b.size()-1<a.size(); i++){
        bool poss = 1; // a[i]부터 시작했을 때 b와 동일하면 poss = 1
        for(int j=0; j<b.size(); j++){
            if(b[j] != a[i+j]){
                poss = 0;
                break;
            }
        }
        if(poss){
            ans++;
            i = i + b.size() - 1; // 중복을 피하기 위해 다음 시작점 위치 변경
        }
    }
    cout << ans;
}