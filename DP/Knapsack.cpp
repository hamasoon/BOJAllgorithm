#include <cstdio>
#include <vector>
#include <utility>

using namespace std;

typedef pair<int, int> pii;

int N, K;
int volume[101] = {};
int value[101] = {};
int cache[100001][101] = {};

int solve(int idx, int tw){
	if(idx==N) return 0;
	
	int &ret = cache[tw][idx];

	if(ret != 0) return ret;

	ret = solve(idx+1, tw);
	if(tw + volume[idx] <= K){
		ret = max(ret, solve(idx+1, tw+volume[idx]) + value[idx]);
	}

	return ret;
}

int main(){
	scanf("%d %d", &N, &K);
	
	for(int i=0; i<N; i++)
		scanf("%d %d", &volume[i], &value[i]);

	printf("%d", solve(0, 0));
}