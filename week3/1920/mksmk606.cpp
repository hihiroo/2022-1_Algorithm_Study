// 수 찾기
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n+1);
    for(int i=1; i<=n; i++) cin >> arr[i];

    sort(arr.begin()+1, arr.end());

    int m;
    cin >> m;

    while(m--){
        int k;
        cin >> k;

        int s = 1, f = n;
        while(s <= f){
            int mid = (s+f)/2;
            if(arr[mid] > k) f = mid - 1;
            else if(arr[mid] < k) s = mid + 1;
            else{
                cout << 1 << '\n';
                break;
            }
        }
        if(s > f) cout << 0 << '\n';
    }
}
