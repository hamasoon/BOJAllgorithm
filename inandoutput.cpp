#include <cstdio>//vsc의 경우 import 불가, but 일반적인 gcc에서의 경우 import사용 권장
int main(){
	int a, b;
	printf("%d", a+b, scanf("%d%d", &a, &b));//이렇게 &를 씀으로써 메모리 최소화
}