#include <cstdio>
#include <cmath>
#include <algorithm>
#define MAX 10001
bool p[MAX];

int main()
{
    std::fill_n(p, MAX, true);
    
    for(int i=2; i<MAX; i++){
        if(!p[i]) continue;
        int temp = i;
        while(temp < MAX){
            temp += i;
            if(temp < MAX) p[temp] = false;
        }
    }
    
    int N; scanf("%d", &N);
    while(N--){
        int num; scanf("%d", &num);
        int ret = num/2 + 1;
        
        while(ret--){
            if(!p[ret]) continue;
            if(p[num-ret]) break;
        }
        
        printf("%d %d\n", ret, num-ret);
    }
}