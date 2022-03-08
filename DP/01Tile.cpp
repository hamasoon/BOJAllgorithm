#include <cstdio>
#include <vector>

#define MOD 15746
using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    int cache[3] = {0, 1, 1};

    for (int i = 3; i <= N + 1; i++)
        cache[i % 3] = (cache[(i - 1) % 3] + cache[(i - 2) % 3]) % MOD;

    printf("%d", cache[(N + 1) % 3]);

    vector<int> v = {};
}