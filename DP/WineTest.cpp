#include <cstdio>

using namespace std;

int v[10001] = {};
int cache[4] = {};

int MAX(int a, int b){if(a>b) return a; return b;}

int main() {
	int N; scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", &v[i]);

    cache[0] = v[0];
    cache[1] = v[0] + v[1];
    cache[2] = v[0] + v[1] + v[2];
    cache[3] = MAX(v[1] + v[3], v[2] + v[3]);

	for (int i = 0; i < N; i++)
		cache[i%4] = MAX(v[i] + cache[(i-2)%4], v[i] + v[i-1] + cache[(i-3)%4]);

	printf("%d", cache[(N-1)%4]);
}