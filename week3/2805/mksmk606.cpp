// 나무 자르기
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m, height[1000005];

bool possible(int h){
    long long sum = 0;
    for(int i=0; i<n; i++){
        if(height[i] > h) sum += (height[i] - h);
    }
    return sum >= m;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> height[i];

    long long s = 0, f = 1e9 + 1;
    while(s+1 < f){
        long long mid = (s+f)/2;
        if(possible(mid)) s = mid;
        else f = mid;
    }
    cout << s;
}
