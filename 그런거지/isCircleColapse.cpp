#include <cstdio>
#include <cmath>

int main(){
    int x1, y1, r1, x2, y2, r2;
    scanf("%d %d %d", &x1, &y1, &r1);
    scanf("%d %d %d", &x2, &y2, &r2);
    
    if(pow(x1-x2, 2) + pow(y1-y2, 2) < pow(r1+r2, 2))
        printf("YES");
    else
        printf("NO");
}