#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        int a, h;
        bool couple = false;
		scanf("%d", &a);
        
        printf("Pairs for %d: ", a);
        
        if(a%2==0)
            h = a/2;
        else
            h = (a+1)/2;
        
        for(int j = 1; j < h; j++){
            if(couple)
                printf(", ");
            else
                couple = true;
        	printf("%d %d", j, a-j);
        }
        printf("\n");
    }
}