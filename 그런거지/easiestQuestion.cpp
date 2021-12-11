#include <cstdio>

int main(){
	int n;
	scanf("%d", &n);

	int e=5;
	char s[11];

	for(int i=0; i<n; i++){
		int temp = 0;
		char temps[11];
		scanf("%s %d", temps, &temp);
		if(e > temp ){
			for(int j=0; j<11; j++){
				s[j] = temps[j];
			}
		}
		else
			continue;
	}

	printf("%s", s);
}