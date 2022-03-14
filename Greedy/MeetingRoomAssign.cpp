#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>
#define MAX 2147483647

using namespace std;

typedef pair<int, int> pii;

vector<pii> v;

bool piisorting(pii a, pii b)
{ 
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    int N, ret = 0, EndTime = 0; scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int S, E; scanf("%d %d", &S, &E);
        v.push_back(make_pair(S, E));
    }

    sort(v.begin(), v.end(), piisorting);

    for (int i = 0; i < N; i++)
    {
        if(v[i].first >= EndTime)
        {
            EndTime = v[i].second;
            ret++;
        }
    }

    printf("%d", ret);
}