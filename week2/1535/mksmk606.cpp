#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, L[21], J[21], ans = 0;
    cin >> n;

    for(int i=0; i<n; i++) cin >> L[i];
    for(int i=0; i<n; i++) cin >> J[i];


    // i번째 사람과 인사를 했다면 i번째 비트를 1로 표현, 안했다면 0으로 표현
    // 즉, n명의 사람들과 인사를 하거나 안하는 경우를 n자리의 이진수로 표현 가능
    // 총 5명의 사람 중 0번 3번 사람과 인사를 했다면 01001(2) (십진수로는 9)로 표현 가능
    // 따라서 아무와도 인사를 안한 0부터 모두와 인사를 한 2^n-1 사이의 수만 보면 됨
    for(int cur = 0; cur < (1<<n); cur++){ // (1<<n) = 2^n
        int hp = 100, joy = 0;

        for(int k=0; k<n; k++){ // 0번째 사람부터 n-1번째 사람까지 인사 여부 확인
            if(cur & (1<<k)){ // 만약 cur의 k번째 비트가 1이라면 -> k번째 사람과 인사를 했다면
                hp -= L[k]; // L[k]만큼 체력을 잃고
                joy += J[k]; // J[k]만큼 기쁨을 얻음
            }
        }
        if(hp <= 0) continue; // 모든 비트를 다 본 후에 남은 체력이 0이하라면 불가능한 경우이므로 패스
        ans = max(ans, joy); // 최대 기쁨 갱신
    }
    cout << ans;
}
