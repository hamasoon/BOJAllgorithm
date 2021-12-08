#include <cstdio>
 
int main()
{
    char str[100];
    int num[100], i, cnt = 0;
    
    scanf("%[^\n]", str);  // gets_s(str) 와 동일
 
    for (i = 2; i > 1; cnt += i > 0)
        i = sscanf(str, "%d%*[ ]%[^\n]", &num[cnt], str);
        
    for (i = 0; i < cnt; i++)
        printf("%d\n", num[i]);
}