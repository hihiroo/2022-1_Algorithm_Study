#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	string str,a,b,c,rev,max = "}";
	cin >> str;
	int l;
	int len = str.size();
	reverse(str.begin(),str.end());
	for(int i=1; i<len-1; i++){
		for(int j=1; j<len-i;j++){
			l = i+j;
			a = str.substr(0,i);
			b = str.substr(i,j);
			c = str.substr(l,len-l);
			rev = c+b+a;
			
			if(rev<max){
				max = rev;
			}
		}
	}
	cout << max;
	return 0;
}