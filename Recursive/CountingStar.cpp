#include <cstdio>
#define MAX 2187

int N;
char ret[MAX][MAX];

void solve(int n, int x, int y){
    if(n == 1){ ret[x][y] = '*'; return;}
    
    solve(n/3, x, y);
    solve(n/3, x + n/3, y);
    solve(n/3, x + (2*n)/3, y);
    solve(n/3, x, y + n/3);
    solve(n/3, x + (2*n)/3, y + n/3);
    solve(n/3, x, y + (2*n)/3);
    solve(n/3, x + n/3, y + (2*n)/3);
    solve(n/3, x + (2*n)/3, y + (2*n)/3);
}

int main(){
    scanf("%d", &N);
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            ret[i][j] = ' ';
        }
    }
    
    solve(N, 0, 0);
    
    for(int i=0; i<N; i++){
            printf("%s\n", &ret[i]);
    }
}