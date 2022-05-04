#include <iostream>
using namespace std;
int n, m, length[100001];

bool possible(int k){
    int cnt=1;
    long long sum = 0;
    for(int i=0; i<n; i++){
        sum += length[i];
        if(length[i]> k) return 0;
        if(sum>k){
            cnt++;
            sum = length[i];
        }
    }
    if(cnt <=m) return 1;
    else return 0;
    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    long long s = 0, f = 1e9,mid;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> length[i];
    }
    
    while(s+1<f){
        mid = (s+f) / 2;
        if(possible(mid)) f = mid;
        else s = mid;
    }
    cout << f;

    return 0;
}