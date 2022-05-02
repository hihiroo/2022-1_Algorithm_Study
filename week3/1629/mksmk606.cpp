// 곱셈
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long

ll fast_pow(ll a, ll b, ll c){
    if(b == 0) return 1;
    if(b % 2 == 0){
        ll tmp = fast_pow(a, b/2, c);
        return (tmp*tmp) % c;
    }
    else return (a*fast_pow(a, b-1, c)) % c;
}

int main(){
    long long a, b, c;
    cin >> a >> b >> c;

    cout << fast_pow(a,b,c);
}
