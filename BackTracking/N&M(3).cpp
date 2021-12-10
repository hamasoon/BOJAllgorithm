#include <iostream>
#include <utility>
#include <string>
#include <algorithm>
using namespace std;

int N, M;

void solve(int d, string h = ""){
    if(d==M) {
        cout << h << "\n";
        return;
    }

	for(int i=1; i<=N; i++){
		solve(d+1, h+to_string(i)+" ");
	}
}

int main(){
	scanf("%d %d", &N, &M);
	
	solve(0);
}