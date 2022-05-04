#include <iostream>
using namespace std;
int n,m, height[1000001];

bool possible(int a){
    long long sum =0;
    for(int i=0; i<n; i++){
        if(height[i]>a) sum += (height[i] - a);
    }
    if(sum >= m) return 1;
    else return 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    long long s = 0 ,f = 1e9 +1,mid,max=0;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> height[i];
    }
    
    while(s+1<f){
        mid = (s + f)/2;
        if(possible(mid)) s = mid;
        else f = mid;
        max = s;
    }
    cout << max;
    return 0;
}