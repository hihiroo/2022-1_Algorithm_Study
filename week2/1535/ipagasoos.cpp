#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int,int> >q;
int n, k, max_sum=0;

int Max(int c,int d);
void Sum(int i,int hp, int sum);

int main(){
    cin >> n;
    int health[21], happy[21];

    for(int i=0; i<n; i++){
        cin >> health[i];
    }
    for(int i=0; i<n; i++){
        cin >> happy[i];
    }
    for(int i=0; i<n; i++){
        int a,b;
        a = health[i];
        b = happy[i];
        q.push_back(make_pair(a,b));
    }
    sort(q.rbegin(), q.rend());
    Sum(0,100,0);
    cout << max_sum;
    return 0;
}

void Sum(int i,int hp, int sum){
    if(i == n){
        if(hp-q[i].first>0){
            sum += q[i].second;
            max_sum = Max(max_sum, sum);
            return;
        }
        return;
    }
    Sum(i+1, hp, sum);

    if(hp-q[i].first <= 0) {
        max_sum = Max(max_sum,sum);
        return;
    }
    
    Sum(i+1, hp - q[i].first, sum+q[i].second);
    
}
int Max(int c,int d){
    if(c>=d) return c;
    else return d;
}