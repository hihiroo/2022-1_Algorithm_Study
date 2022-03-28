#include <iostream>
using namespace std;

int main(){
    string a;
    cin >> a;

    string ans = "";
    for(int i=1; i-1<a.size(); i++){ // 0~i-1까지
        string tmp0 = "";
        for(int k=i-1; k>=0; k--) tmp0 += a[k];
        
        for(int j=i+1; j<a.size(); j++){// i~j-1, j~끝까지
            string tmp1="", tmp2="";
            for(int k=j-1; k>=i; k--) tmp1 += a[k];
            for(int k=a.size()-1; k>=j; k--) tmp2 += a[k];

            string res = tmp0 + tmp1 + tmp2;
            if(ans == "" || ans > res) ans = res;
        }
    }
    cout << ans;
}