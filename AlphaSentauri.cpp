#include <cstdio>
#include <cmath>

int main(){
    int N; scanf("%d", &N);
    while(N--){
        int x, y, temp, i=0, ret=0; scanf("%d %d", &x, &y);
        temp = y-x;
        i = sqrt(temp);
        if(temp == i*i) ret = 2*i-1;
        else if((temp-i*i)%i == 0) ret += (temp-i*i)/i + 2*i -1;
        else ret += (temp-i*i)/i + 2*i;
        printf("%d\n", ret);
    }
}