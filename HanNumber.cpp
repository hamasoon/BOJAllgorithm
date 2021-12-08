#include <cstdio>

int main(){
	int N; scanf("%d", &N); N++;
	int cnt = 0;

	while(N--){
        if(N<100){ cnt++; continue;}
        
		int temp = N, dist = 0, c = 0, p = 0, r=0;
		while(temp > 0){
			c = temp % 10;
			temp /= 10;
            r++;
            if(r==1) {p = c; continue;}
			if(r==2) dist = p - c;
			if(p - c != dist) {break;}
            if(temp == 0) cnt++;
            p = c;
		}
	}

	printf("%d", cnt - 1);
}