#include <cstdio>
int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        char a[24];
        int num = 0;
        int dec = 1;
		scanf("%s", &a);
        
        for(int i = 24; i > 0; i--){
            num += (a[i-1]-48)*dec;//char to int변환시 재밌게 하는 법! 48빼기
            dec *= 2;//사실 이건 그 유명한 그걸로도 할 수 있었지 않았을까
        }
        printf("%d\n", num);
    }
}