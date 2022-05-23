#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, m,num;
    cin >> n;
    vector<int> a(n+1);
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    sort(a.begin()+1,a.end());

    cin >> m;
    for(int i=0; i<m; i++){
        int cnt = 0;
        cin >> num;
        int s = 1, f = n;
        while(s<=f){
            int mid = (s+f)/2;
            if(num > a[mid]) s = mid +1;
            else if(num < a[mid]) f = mid -1;
            else {
                cnt++;
                cout << "1\n";
                break;  
            }
        }
        if(cnt == 0) cout << "0\n";
    }
    return 0;
}