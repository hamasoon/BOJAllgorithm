#include <cstdio>
#include <vector>
using namespace std;
typedef pair<int, int> pii;

int N, K;
vector<pii> v;

int solve(int idx, int tw, int tv){
	if(idx==N) return 0;
	
	int temp1=0, temp2=0, ret;
	if(tw + v[idx].first <= K) temp1 = solve(idx+1, tw+v[idx].first, tv+v[idx].second);
	temp2 = solve(idx+1, tw, tv);

	return ret = temp1 > temp2 ? temp1 : temp2;
}

int main(){
	scanf("%d %d", &N, &K);
	
	while(N--){
		int W, V; scanf("%d %d", &W, &V);
		v.push_back({W, V});
	}

	printf("%d", solve(0, 0, 0));
}