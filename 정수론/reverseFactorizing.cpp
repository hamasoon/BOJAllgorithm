#include <iostream>
using namespace std;

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int N; scanf("%d", &N);
	int Min = 1000001, Max = -1;

	while(N--){
		int num; cin >> num;
		if(num > Max) Max = num;
		if(num < Min) Min = num;
	}

	printf("%d", Min * Max);
}