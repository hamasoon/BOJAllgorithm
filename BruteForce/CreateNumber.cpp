#include <cstdio>

int main(){
    int N, i; scanf("%d", &N);
    
    for(i=0; i<N; i++){
        int temp = i, c = i;
        do{
            c += temp%10;
            temp /= 10;
        }while(temp > 0);
        if(c == N) break;
    }
    
    if(i == N) printf("%d", 0);
    else printf("%d", i);
}