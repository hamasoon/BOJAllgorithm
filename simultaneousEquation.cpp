#include <cstdio>

int main() 
{
	int a, b, c, d, e, f;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    
	int x = ((b*f)-(e*c))/((b*d)-(a*e));
    int y;
    if(b != 0) y = (c-a*x)/b;
	else y = (f-d*x)/e;

	printf("%d %d", x, y);
}