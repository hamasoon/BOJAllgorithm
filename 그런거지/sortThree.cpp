#include <cstdio>
int main(){
	int a, b, c;
    int t = 0;
	scanf("%d %d %d", &a, &b, &c);
    
    if(b > a){
        t = a; a = b; b = t;
    }
    if(c > b){
        t = b; b = c; c = t;
    }
    if(b > a){
        t = a; a = b; b = t;
    }
    
    printf("%d %d %d", a, b, c);
}