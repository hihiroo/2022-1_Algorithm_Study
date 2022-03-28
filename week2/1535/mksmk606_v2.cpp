#include <bits/stdc++.h>
using namespace std;
#define lli long long

int n, L[21], J[21], ans;

void f(int idx, int hp, int joy){
    if(hp <= 0) return; // 체력이 0 이하면 불가능한 경우이므로 탐색 종료
    if(idx == n){ // 모든 사람을 지나왔다면 지금까지 축적된 기쁨을 최댓값과 비교
        ans = max(ans, joy);
        return;
    }
    f(idx+1, hp, joy); // 인사를 하지 않고 다음 사람으로 넘어간 경우
    f(idx+1, hp-L[idx], joy+J[idx]); // 인사를 하고 다음 사람에게 넘어가는 경우
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++) cin >> L[i];
    for(int i=0; i<n; i++) cin >> J[i];

    f(0, 100, 0);
    cout << ans;
}
