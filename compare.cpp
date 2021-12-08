#include <iostream>
int main(){
	int a, b;
    printf("%s", a>b ? ">" : a<b ? "<" : "==", scanf("%d %d", &a, &b)); // 3중 3항 연산
	//scanf는 참조로 받아들여야 함 -> 임시객체임...
}
//#include <cstdio>
//main(){int a,b;scanf("%d%d",&a,&b);printf(a==b?"==\n":(a>b?">\n":"<\n"));}