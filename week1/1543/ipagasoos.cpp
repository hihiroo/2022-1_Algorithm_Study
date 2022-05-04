#include <iostream>
#include <string>
using namespace std;

int main(){
	string a,b;
	int k=0,cnt=0;
	getline(cin,a);
	getline(cin,b);
	int len_b = b.size();
	while(k != string::npos){
		k = a.find(b);
		a.erase(0,k+len_b);
		cnt++;
	}
	
	cout << cnt-1;
	return 0;
}