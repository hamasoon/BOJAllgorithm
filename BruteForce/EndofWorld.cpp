#include <cstdio>

int main(){
	int N; scanf("%d", &N);

	if(N == 1){printf("666"); return 0;}

	int c = 1, ret = 0;
	for(int i=1000; ;i++){
		int cnt = 0;
		int temp = i;
        
		while(temp > 1){
			if(temp%10 == 6) cnt++;
			else cnt = 0;
			if(cnt == 3){c++; break;}
			temp /= 10;
		}
        
        if(c == N){ret = i; break;}
	}

	printf("%d", ret);
}