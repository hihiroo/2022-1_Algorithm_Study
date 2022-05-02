// 기타 레슨
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> arr(100005);
int n, m;

bool possible(long long k){
    int cnt = 1;
    long long sum = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > k) return 0;
        if(sum + arr[i] > k){
            cnt++;
            sum = arr[i];
        }
        else sum += arr[i];
    }
    return cnt <= m;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;

    for(int i=0; i<n; i++) cin >> arr[i];

    long long s = 0, f = 1e9;
    while(s+1 < f){
        long long mid = (s+f)/2;
        if(possible(mid)) f = mid;
        else s = mid;
    }
    cout << f;
}
