#include <cstdio>
#include <cmath>
#define LEN 8001

int Count[LEN] = {0};

int main(){
	int N, min = 4000, max = -4000, sum = 0; scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int num; scanf("%d", &num);
		if(num>max) max = num;
		if(num<min) min = num;
		sum += num;
		Count[num+4000]++;
	}
    
	int avg = floor((double)sum/N + 0.5);
    
	int rng = max-min, cnt = 0, med = 0, infCnt = 0, infNum = 0;
	bool secondCheck = false, MedCheck = false;

	for(int i=0; i<LEN; i++){
		cnt += Count[i];
		if(cnt > N/2 && !MedCheck) {med = i-4000; MedCheck = true;}
		if(Count[i]>Count[infNum]){infNum = i; infCnt = 0;}
		else if(Count[i]==Count[infNum]&&infCnt!=1){infNum = i; infCnt++;}
	}

	printf("%d\n%d\n%d\n%d", avg, med, infNum-4000, rng);
}