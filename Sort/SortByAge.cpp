#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int, string> pis;

bool compare(pis a, pis b){
	return a.first < b.first;
}

int main(){
	int N; cin >> N;

	vector<pis> v(N);

	for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

	stable_sort(v.begin(), v.end(), compare);

	for(int i=0; i<N; i++) cout << v[i].first << " " << v[i].second << "\n";
	//endl이 속도 저하의 주범!
}