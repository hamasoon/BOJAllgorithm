#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int,int> pii;

bool compare(pii a, pii b){
	if(a.second == b.second) return a.first > b.first;

	return a.second > b.second;
}

vector<pii> v;

int main(){
	int N; scanf("%d", &N);
	while(N--){
		int A, B; scanf("%d %d", &A, &B);
		v.push_back(make_pair(A, B));
	}

	sort(v.begin(), v.end(), compare);

	for(const pii& el : v){
		printf("%d %d\n", el.first, el.second);
	}
}