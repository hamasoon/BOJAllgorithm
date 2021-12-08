#include <cstdio>

using namespace std;
int temp = 0;

int main() {
    int N; scanf("%d",&N);
    char s[101]; scanf("%s", s);
	for (int i = 0; i < N; i++) {
		temp += s[i] - '0';
	}
	printf("%d", temp);
}