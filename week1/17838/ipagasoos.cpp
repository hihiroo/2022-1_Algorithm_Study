#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	for(int i=0; i<n; i++){
		string a;
		cin >> a;
		if(a.size() != 7) cout << "0\n";
		else {
			if (a[0] == a[2]) cout << "0\n";
			else if (a[0] == a[1] && a[1] == a[4]){
				if(a[2] == a[3] && a[3] == a[5] && a[5] == a[6]) cout << "1\n";
				else cout << "0\n";
			}
			else cout << "0\n";
		}	
	}
    return 0;
}
