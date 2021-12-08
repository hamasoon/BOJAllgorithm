#include <cstdio>
#include <cmath>
bool p[1000001] = {false};

int main()
{
    p[2] = true;
    
    int A,B; scanf("%d %d", &A, &B);
    
    if(A<2 && B>=2) printf("%d", 2);
    
    for(int i=3; i<B; i++){
        bool isPrime = true;
        for(int j=2; j<sqrt(i)+1; j++){
            if(!p[j]) continue;
            if(i%j == 0) isPrime = false;
        }
        if(isPrime) {p[i]=true; if(i >= A) printf("%d\n", i);}
    }
}