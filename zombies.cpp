#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        int a, b;
		scanf("%d %d", &a, &b);
        printf((a>=b) ? "MMM BRAINS\n" : "NO BRAINS\n");
    }
}