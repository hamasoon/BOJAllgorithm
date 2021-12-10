#include <iostream>
#include <utility>
#include <string>
#include <algorithm>
using namespace std;

int N, M;

void solve(int d = 0, int idx = 0, string h = ""){
    if(d==M) {
        cout << h << "\n";
        return;
    }

	for(int i=idx; i<=N; i++){
		solve(d+1, i, h+to_string(i)+" ");
	}
}

int main(){
	scanf("%d %d", &N, &M);
	
	solve();
}