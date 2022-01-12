#include <cstdio>
using namespace std;

int N;
int cache[302];
int v[302] = {};

int MAX(int A, int B) { if (A > B) return A; return B; }

int solve(int idx = 0, int cnt = 0){
	if(idx > N) return 0;
	if(cnt > 1) return 0;
	if(cache[N] != -1) return cache[N];

	return cache[N] = MAX(v[idx]+solve(idx+1, cnt+1), v[idx]+solve(idx+2, 0));
}

int main(){
	for(int i = 0; i < 301; i++) cache[i] = -1;
	
	scanf("%d", &N); v[0] = 0;
    for(int i = 1; i <= N; i++) scanf("%d", &v[i]);

	printf("%d", solve());
}