#include <cstdio>
using namespace std;

int gcd(int a, int b){
	if(a % b == 0) return b;

	if(a < b) return gcd(b, a);
	
	return gcd(b, a%b);
}

int main(){
	int a, b; scanf("%d %d", &a, &b);

	int GCD = gcd(a, b);
	int LCM = a*b/GCD;

	printf("%d\n%d", GCD, LCM);
}