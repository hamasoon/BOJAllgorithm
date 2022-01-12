#include <cstdio>
using namespace std;

int N;
int cache[302];
int v[302] = {};

int MAX(int A, int B) { if (A > B) return A; return B; }

int main(){
	for(int i = 0; i < 301; i++) cache[i] = -1;
	
	scanf("%d", &N); v[0] = 0;
    for(int i = 1; i <= N; i++) scanf("%d", &v[i]);
    
    cache[0] = v[0];
    cache[1] = v[0] + v[1];
    cache[2] = v[0] + v[1] + v[2];
    cache[3] = MAX(v[1] + v[3], v[2] + v[3]);
    
    for(int i = 4; i <= N; i++)
        cache[i] = MAX(v[i] + cache[i-2], v[i] + v[i-1] + cache[i-3]);
        
	printf("%d", cache[N]);
}