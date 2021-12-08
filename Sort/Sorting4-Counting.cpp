#include <cstdio>
#define MAX 10000

int Count[MAX] = {};

int main(){
	int N; scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int num; scanf("%d", &num);
		Count[num]++;
	}
	
	for (int i=0; i<MAX; i++) {
		for(int j=0; j<Count[i]; j++){
			printf("%d\n", i);
		}
	}
}