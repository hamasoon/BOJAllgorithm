#include <cstdio>
#include <vector>
using namespace std;

typedef pair<int, int> pii;

vector<pii> v;

int compare(pii a, pii b){
	if(a.first > b.first && a.second > b.second) return 0;
	else if(a.first < b.first && a.second < b.second) return 1;
	return 0;
}

int main(){
	int N; scanf("%d", &N);
	int rank[50] = {};

	for (int i = 0; i < N; i++){
		int W, H; scanf("%d %d", &W, &H);
		v.push_back(make_pair(W, H));
	}
	
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			rank[i] += compare(v[i], v[j]);
		}

		printf("%d ", rank[i] + 1);
	}
}