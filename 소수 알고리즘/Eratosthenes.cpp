#include <cstdio>
#include <cmath>
#include <algorithm>
#define MAX 1000001
bool p[MAX];

int main()
{
    std::fill_n(p, MAX, true);
    
    int A,B; scanf("%d %d", &A, &B);
    
    for(int i=2; i <=B; i++){
        if(!p[i]) continue;
        int temp = i;
        while(temp < MAX){
            temp += i;
            if(temp < MAX) p[temp] = false;
        }
        if(i>=A) printf("%d\n", i);
    }
}