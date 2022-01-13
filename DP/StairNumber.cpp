#include <cstdio>
#define DIV 1000000000

using namespace std;

long long cache[2][10] = {}; //슬라이싱 윈도우

int main(){
	int N; scanf("%d", &N);

	for(int i = 0; i < N; i++){
		for(int j = 0; j < 10; j++){
			if(i == 0) cache[i][j] = 1;
			else{
				if(j == 0) cache[i%2][j] = cache[(i-1)%2][j+1]%DIV;
				else if(j == 9) cache[i%2][j] = cache[(i-1)%2][j-1]%DIV;
				else cache[i%2][j] = (cache[(i-1)%2][j-1]+cache[(i-1)%2][j+1])%DIV;
			}
		}
	}

	long long ret = 0;

	for(int i = 1; i < 10; i++){
		ret += cache[(N-1)%2][i]; ret = ret % DIV;
	}

	printf("%lld", ret);
}