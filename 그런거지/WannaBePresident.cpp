#include <cstdio>

int main(){
    int arr[15][15] = {0};
    for(int i=0; i<15; i++){
        for(int j=1; j<15; j++){
            if(i == 0) arr[0][j] = j;
            else arr[i][j] = arr[i-1][j] + arr[i][j-1];//재밌졍
        }
    }
    
    int N; scanf("%d", &N);
    while(N--){
        int k, n; scanf("%d", &k); scanf("%d", &n);
        printf("%d\n", arr[k][n]);
    }
}