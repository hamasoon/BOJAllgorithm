#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> num;
int cnt = 0;

int solve(int n, int t, int c){
	if(t > M || N-n < c-1 || (n == N && c != 0)) return 0;
	if(n == N || c == 0) return t;

	int temp = t + num[n];
	if(M - t < (c-1)*num[n+1]) return 0;
    
    int temp1 = solve(n+1, t+num[n], c-1);
    int temp2 = solve(n+1, t, c);

	return temp1 > temp2 ? temp1 : temp2;
}

int main(){
    cin >> N >> M;
    
    for(int i=0; i<N; i++){
        int x; scanf("%d", &x);
        num.push_back(x);
    }
    sort(num.begin(), num.end());
	num.push_back(0);
    
	cout << solve(0, 0, 3);
}