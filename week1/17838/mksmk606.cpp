#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string a;
        cin >> a;

        if(a.size() != 7) cout << 0 << '\n';
        else{
            string A, B;
            A = a[0], B = a[2];

            string tmp = A + A + B + B + A + B + B;
            if(A == B || a != tmp) cout << 0 << '\n';
            else cout << 1 << '\n';
        }
    }
}