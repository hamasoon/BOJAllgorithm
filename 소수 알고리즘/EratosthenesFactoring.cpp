#include <cstdio>
#include <cmath>
#define MAX 10000001
using namespace std;

int minFact[MAX];

int main(){
    minFact[0] = minFact[1] = -1;
    int N; scanf("%d", &N);
    for(int i=2; i<=N; i++)
        minFact[i] = i;
    
    for(int i=2; i<=sqrt(N); i++){
        if(minFact[i] == i){
            for(int j=i*i; j<=N; j+=i){
                if(minFact[j] == j){
                    minFact[j] = i;
                }
            }
        }
    }
    
    while(N>1){
        printf("%d\n", minFact[N]);
        N /= minFact[N];
    }
}