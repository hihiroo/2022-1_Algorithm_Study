#include <iostream>
using namespace std;
#define ll long long

ll fast_pow(ll a, ll b, ll c){
    ll sum;
    if(b == 0) return 1;
    if(b%2 == 0){
        sum = fast_pow(a,b/2,c);
        return (sum*sum)%c;
    }
    else{
        return (a*fast_pow(a,b-1,c))%c;
    }
}

int main(){
    long long a,b,c;
    cin >> a >> b >> c;
    
    cout << fast_pow(a,b,c);
    return 0;
}
