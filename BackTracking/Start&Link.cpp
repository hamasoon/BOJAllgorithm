#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;

int stat[20][20];
bool team[20] = {false};

int N;
int Min = 1000000;

void calc(){
	int tf = 0;
	int tt = 0;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if(team[i] == team[j]){
				if(team[i]) tt += stat[i][j];
				else tf += stat[i][j];
			}
		}
	}
	int dist = abs(tf-tt);
	if(dist < Min) Min = dist;
	return;
}

void solve(int idx = 0, int d = 0){
	if(idx == N && d == N/2) {
		calc();
		return;
	}

	if(d == N/2) return;

	for (int i = idx; i < count; i++){
		team[i] = true;
		solve(i+1, d+1);
		team[i] = false;
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			cin >> stat[i][j];
		}
	}
	
	solve()

	cout << Min;
}