#include<cstdio>

using namespace std;

int v[1000001] = {};

int main()
{
    int N, K, ret = 0; scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++)
        scanf("%d", &v[i]);
    
    for (int i = N - 1; i >= 0; i--)
    {
        while(K >= v[i])
        {
            ret++;
            K -= v[i];
        }
    }   

    printf("%d", ret);
}