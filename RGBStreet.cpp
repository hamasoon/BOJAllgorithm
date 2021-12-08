#include <cstdio>
#include <vector>
using namespace std;

int N;
vector<vector<int>> cost;

const int min(int &a, int &b){
    return a < b ? a : b;
}

const int min(int &a, int &b, int&c){
    int ret = a;
    if(b < ret) ret = b;
    if(c < ret) ret = c;
    
    return ret;
}

int main(){
    scanf("%d", &N);
    
    int R, G, B; scanf("%d %d %d", &R, &G, &B);
    cost.push_back({R, G, B});
    
    for(int i=1; i<N; i++){
		scanf("%d %d %d", &R, &G, &B);
		cost.push_back({R + min(cost[i-1][1], cost[i-1][2]), G + min(cost[i-1][0], cost[i-1][2]), B + min(cost[i-1][0], cost[i-1][1])});
    }
    
    printf("%d", min(cost[N-1][0], cost[N-1][1], cost[N-1][2]));
}