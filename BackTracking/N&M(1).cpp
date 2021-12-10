#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
using namespace std;

int N, M;
vector<bool> c;

void solve(int d, string h = ""){
	if(d==M) cout << h << "\n";

	for(int i=1; i<N; i++){
		if(c[i] == true) continue;
		c[i] = true;
		solve(d+1, h+to_string(i)+" ");
		c[i] = false;
	}
}

int main(){
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++){
		c.push_back(false);
	}
	
	solve(0);
}