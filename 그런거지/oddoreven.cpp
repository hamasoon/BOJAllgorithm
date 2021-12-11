#include <cstdio>

int main() 
{
    int count = 1;
    while(true){
        int x;
        scanf("%d", &x);
        if(x == 0) break;
        
        printf("%d. ", count++);
        
        if(x%2 == 0)
            printf("even %d\n", x/2);
        else
            printf("odd %d\n", (x-1)/2);
    }
}