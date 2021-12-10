#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, ret=0;
vector<int> Board;

bool Check(int idx, int num){
	int cnt = 1;
	for (int i = idx - 1; i >= 0; i--){
		if(Board[i] == num) return false;
		if(Board[i] == num - cnt) return false;
		if(Board[i] == num + cnt) return false;
		cnt++;
	}
	return true;
}

void solve(int idx = 0){
	if(idx == N){ ret++; return;}

	for (int i = 0; i < N; i++){
		if(Check(idx, i)) {
			Board[idx] = i;
			solve(idx + 1);
			Board[idx] = -1;
		}
	}
	
	return;
}

int main(){
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		Board.push_back(-1);
	}
	
	solve();

	cout << ret;
}