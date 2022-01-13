#include <cstdio>
using namespace std;

int cache[1000001] = { };

int MIN(int a, int b, int c){
	if(a > b){
		if(b > c) return c;
		else return b;
	}
	else{
		if(a > c) return c;
		else return a;
	}
}

int solve(int idx){
	if(cache[idx] != -1) return cache[idx];
	if(idx < 1) return 9999999;
	if(idx == 1) return 0;

	int a = 9999999, b = 9999999, c = 9999999;

	if(idx % 3 == 0) a = solve(idx/3);
	if(idx % 2 == 0) b = solve(idx/2);
	c = solve(idx-1);

	return cache[idx] = MIN(a, b, c) + 1;
}

int main(){
	int N; scanf("%d", &N);
	for (size_t i = 0; i <= N; i++) cache[i] = -1;

	printf("%d", solve(N));
}

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n ;
	vector<int> dp(n + 1);

	//bottom-up
	dp[1] = 0;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;
		if (!(i % 3)) dp[i] = min(dp[i],dp[i / 3] + 1);
		if (!(i % 2)) dp[i] = min(dp[i], dp[i / 2] + 1);
	}

	cout << dp[n] << endl;
	return 0;
}
*/