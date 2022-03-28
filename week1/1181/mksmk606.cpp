#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    pair<int,string> arr[n];

    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        arr[i].first = a.size(); // 단어의 길이
        arr[i].second = a; // 단어
    }

    sort(arr,arr+n); // pair의 first가 작은 순으로, 같다면 second가 작은 순으로
    // 즉, 단어의 길이가 작은 순으로, 같다면 사전순으로 정렬
    // 같은 단어의 경우 정렬 후에 연속으로 나타나게 됨
    
    for(int i=0; i<n; i++){
        if(i && arr[i].second == arr[i-1].second) continue; // 중복을 없애기 위해 이전 단어와 같다면 출력하지 않고 지나감
        // 이때, i가 0일 때는 음수 인덱스에 접근하기 때문에 i > 0 조건 추가 필수
        cout << arr[i].second << '\n';
    }
}
