#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	string a;
	vector<pair<int,string> > v;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a;
		int len = a.size();
		v.push_back(make_pair(len,a));
	}
    
	sort(v.begin(),v.end());
	
	for(int i=0; i<n; i++){
		if(i == n-1){
			cout << v[i].second << "\n";
		}
		else if(v[i].second != v[i+1].second){
			cout << v[i].second << "\n";
		}
	}
    return 0;
}