#include <cstdio>
#define MAX 101
using namespace std;

long long cache[MAX] = {};

long long solve(int n){
	if(cache[n] != 0) return cache[n];

	return cache[n]=solve(n-1) + solve(n-5);
}

int main(){
	cache[1]=1;cache[2]=1;cache[3]=1;cache[4]=2;cache[5]=2;
	cache[6]=3;cache[7]=4;cache[8]=5;cache[9]=7;cache[10]=9;
	int N; scanf("%d", &N);
	while(N--){
		int num; scanf("%d", &num);
        printf("%lld\n", solve(num));
	}
}